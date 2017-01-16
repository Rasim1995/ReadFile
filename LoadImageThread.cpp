#include "LoadImageThread.h"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv/cv.h"
#include <QtMath>


using namespace std;


LoadImageThread::LoadImageThread()
{
    _autoSetting=true;
    _brightBolom=60;
    _gainBolom=300;
    _live=false;
    _pause = false;
    _delay = 70;
    _isForward = true;
    _pause1 = false;
    _pause = true;


    _imgBufBolometr16 = new ushort[gl_sizeFrameOriginal+gl_widthOriginal];
    _matBolometr8.create(gl_heightOriginal, gl_widthOriginal, CV_8UC1);
    _searchAndTrackingTargetBolometr.setImage(_imgBufBolometr16);


    _imgBufKreol16 = new ushort[gl_sizeFrameOriginal+gl_widthOriginal];
    _matKreol8.create(gl_heightOriginal, gl_widthOriginal, CV_8UC1);
    _searchAndTrackingTargetKreol.setImage(_imgBufKreol16);
    _searchAndTrackingTargetKreol.setTypeOfCamera(1);
    _masACalibr = new int[gl_sizeFrameOriginal];
    _masBCalibr = new int[gl_sizeFrameOriginal];


    QFile file("masbad.dat");
    file.open(QFile::ReadOnly);
    if(file.isOpen())
    {
        char* v = new char[50];
        while(!file.atEnd())
        {
            file.readLine(v, 50);
            QString s(v);
            _badPixels.push_back(s.toUInt());
        }
        file.close();
        delete[] v;
    }

}
LoadImageThread::~LoadImageThread()
{
    stop();
    delete[] _masACalibr;
    delete[] _masBCalibr;
    delete[] _resultImgBolometr;
    delete[] _resultImgKreol;
    delete[] _imgBufBolometr16;
}


void LoadImageThread::run()
{
    _live=true;
    forever
    {
        _mutex.lock();
        if(!_live)
            break;

        if(!_pause || !_pause1)
        {
            _pause1 = true;

            bolometrProcess();
            kreolProcess();
            cadrNumberChanged(_fileKreol.pos()/((gl_sizeFrameOriginal+320)*2));
        }
        _mutex.unlock();
        QThread::msleep(_delay);

    }
    _mutex.unlock();
    _fileBolometr.close();
}

void LoadImageThread::bolometrProcess()
{
    if(_fileBolometr.atEnd())
    {
        //_imageProcessingBolometr.reset();
        _fileBolometr.seek(0);
    }

    _dataStreamBolometr.readRawData((char *)_imgBufBolometr16, (gl_sizeFrameOriginal+320)*sizeof(ushort));
    adjustmentContrastAndBrigtness(_imgBufBolometr16, _matBolometr8.data, gl_sizeFrameOriginal, this->_gainBolom, _brightBolom, _autoSetting);
    _searchAndTrackingTargetBolometr.PROCESSING();
    onFounded(_searchAndTrackingTargetBolometr.isCaptured());
    if(_searchAndTrackingTargetBolometr.isCaptured())
        drawAim(_searchAndTrackingTargetBolometr.getX(), _searchAndTrackingTargetBolometr.getY(), _matBolometr8);

    emit DataIsReadyBolometr(_matBolometr8.data);
}

void LoadImageThread::kreolProcess()
{
    if(_fileKreol.atEnd())
    {
        //_imageProcessingKreol.reset();
        _fileKreol.seek(0);
        _fileBolometr.seek(0);
    }

    _dataStreamKreol.readRawData((char *)_imgBufKreol16, (gl_sizeFrameOriginal+gl_widthOriginal)*sizeof(ushort));

    alignImage(_imgBufKreol16, gl_sizeFrameOriginal);
    deleteBadPixels(_imgBufKreol16);


    adjustmentContrastAndBrigtness(_imgBufKreol16, _matKreol8.data, gl_sizeFrameOriginal, this->_gainBolom, _brightBolom, _autoSetting);

    _searchAndTrackingTargetKreol.PROCESSING();
    if(_searchAndTrackingTargetKreol.isCaptured())
        drawAim(_searchAndTrackingTargetKreol.getX(), _searchAndTrackingTargetKreol.getY(), _matKreol8);

    emit DataIsReadyKreol(_matKreol8.data);
}



void LoadImageThread::drawAim(int x, int y, Mat img)
{
    int sizeAim= 10;
    cv::Point p1, p2;
    p1.x = x;
    p1.y = y-sizeAim;

    p2.x = x;
    p2.y = y+sizeAim;

    cv::line(img, p1, p2, cv::Scalar(0), 1);//вертикальная линия

    p1.x = x-sizeAim;
    p1.y = y;

    p2.x = x+sizeAim;
    p2.y = y;

    cv::line(img, p1, p2, cv::Scalar(0), 1);//горизонтальная линия
}

void LoadImageThread::setFolderName(QString folderName)
{
    _mutex.lock();

    _folderName = folderName;
    //_imageProcessingBolometr.reset();

    if(_fileBolometr.isOpen())
        _fileBolometr.close();

    _fileBolometr.setFileName(_folderName+"/bolometr.dat");
    _fileBolometr.open(QIODevice::ReadOnly);

    if(!_fileBolometr.isOpen())
    {
        qDebug()<<"Не удалось открыть файл";
        this->exit();
        this->wait();
    }

    _dataStreamBolometr.setDevice(&_fileBolometr);


    if(_fileKreol.isOpen())
        _fileKreol.close();

    _fileKreol.setFileName(_folderName+"/kreol.dat");
    _fileKreol.open(QIODevice::ReadOnly);

    if(!_fileKreol.isOpen())
    {
        qDebug()<<"Не удалось открыть файл";
        this->exit();
        this->wait();
    }

    _dataStreamKreol.setDevice(&_fileKreol);

    emit setMaxCadrCount(_fileKreol.size()/((gl_sizeFrameOriginal+320)*2));


    QFile file;
    file.setFileName(_folderName+"/masACalibr.dat");
    file.open(QIODevice::ReadOnly);
    if(!file.isOpen())
    {
        qDebug()<<"Не удалось открыть файл";
        this->exit();
        this->wait();
    }
    QDataStream stream(&file);
    stream.readRawData((char *)_masACalibr, gl_sizeFrameOriginal*sizeof(int));
    file.close();


    file.setFileName(_folderName+"/masBCalibr.dat");
    file.open(QIODevice::ReadOnly);
    if(!file.isOpen())
    {
        qDebug()<<"Не удалось открыть файл";
        this->exit();
        this->wait();
    }
    stream.setDevice(&file);
    stream.readRawData((char *)_masBCalibr, gl_sizeFrameOriginal*sizeof(int));
    file.close();

    _mutex.unlock();

    if(!isRunning())
    {
        start();
    }
    update();
}

void LoadImageThread::setAutoSetting(bool v)
{
    _autoSetting = v;
    update();
}

void LoadImageThread::setBrightness(int v)
{
    _brightBolom = v;
    update();
}

void LoadImageThread::setContrast(int v)
{
    _gainBolom = v;
    update();
}

void LoadImageThread::setSpeed(int v)
{
    _mutex.lock();
    _delay = 105-(int)(v/5);
    _mutex.unlock();
}

void LoadImageThread::setForward(bool isForward)
{
    this->_isForward = isForward;
}

void LoadImageThread::setIsDrawContours(bool value)
{

}

void LoadImageThread::setNumberOfCadr(int number)
{
    _mutex.lock();
    _fileBolometr.seek((long)number*(gl_sizeFrameOriginal+320)*2);
    _fileKreol.seek((long)number*(gl_sizeFrameOriginal+320)*2);


    bolometrProcess();
    kreolProcess();
    _mutex.unlock();
}


void LoadImageThread::stop()
{
    _mutex.lock();
    _live=false;
    _mutex.unlock();
    this->wait();
}

void LoadImageThread::pause()
{
    _pause=true;
}

void LoadImageThread::resume()
{
    _mutex.lock();
    _pause=false;
    _mutex.unlock();
}

void LoadImageThread::adjustmentContrastAndBrigtness(ushort *img, uchar *outputImg, uint sizeImg, int contrast, int brigtness, bool autoCorrection)
{
    long AverageLong=0;
    for (uint i=0; i<sizeImg; i++)
        AverageLong += (long)img[i];

    long Average=(long)(AverageLong/(sizeImg));

    if(autoCorrection)
    {
        long AverageSignal_local=0;

        for (uint i=0; i< (sizeImg); i++)
            AverageSignal_local += abs(img[i]-Average);

        float std= abs(AverageSignal_local/sizeImg);
        float delta=std*8;
        if (delta<2050)  delta=2050;
        contrast = abs((16384*128)/delta);
        brigtness = 5000;
    }

    for (uint i=0; i<sizeImg; i++)
    {
        int pix_int=(int)((img[i]-Average)*contrast/128)+brigtness;

        if (pix_int>0x3fff)  pix_int=0x3fff;
        if (pix_int<0)  pix_int=0;
        outputImg[i]=(uchar)((pix_int/64));
    }
}

void LoadImageThread::alignImage(ushort *img, uint sizeImage)
{
    for(uint i = 0; i<sizeImage; i++)
    {
        if(_masACalibr[i]!=0)
            img[i] = (img[i]-_masBCalibr[i]) * _masACalibr[i]/32768+5000;

    }
}

void LoadImageThread::deleteBadPixels(ushort *img)
{
    foreach (uint badPixel, _badPixels)
    {
        img[badPixel] = (img[badPixel-8]+img[badPixel-7]+img[badPixel-6]+img[badPixel-5]+img[badPixel-4]+img[badPixel-3]+img[badPixel-2]+ img[badPixel-1]+
                        img[badPixel+1]+img[badPixel+2]+img[badPixel + 3]+img[badPixel+4]+img[badPixel+5]+img[badPixel+6]+img[badPixel+7]+img[badPixel+8])/16;
    }
}

void LoadImageThread::next()
{
    _mutex.lock();
    _pause1 = false;
    _mutex.unlock();
}

void LoadImageThread::ago()
{
    _mutex.lock();
    _fileBolometr.seek(_fileBolometr.pos()-(2*(gl_sizeFrameOriginal+320)*sizeof(ushort)));
    _fileKreol.seek(_fileBolometr.pos()-(2*(gl_sizeFrameOriginal+320)*sizeof(ushort)));
    _pause1 = false;
    _mutex.unlock();
}

void LoadImageThread::reset()
{
    _searchAndTrackingTargetBolometr.reset();
    _searchAndTrackingTargetKreol.reset();
}

void LoadImageThread::atFirst()
{
    _mutex.lock();
    _fileBolometr.seek(0);
    _fileKreol.seek(0);
    _mutex.unlock();
}

void LoadImageThread::update()
{
    _fileBolometr.seek(_fileBolometr.pos() - (gl_sizeFrameOriginal+320)*2);
    _fileKreol.seek(_fileKreol.pos() - (gl_sizeFrameOriginal+320)*2);

    bolometrProcess();
    kreolProcess();
    cadrNumberChanged(_fileKreol.pos()/((gl_sizeFrameOriginal+320)*2));
}

void LoadImageThread::onFounded(bool value)
{
    emit founded(value);
}

