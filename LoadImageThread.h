#ifndef LOADIMAGETHREAD_H
#define LOADIMAGETHREAD_H


#include <QThread>
#include "iostream"
#include "iostream"
#include "fstream"
#include <QDebug>
#include <QDataStream>
#include <QFile>
#include "SearchAndTrackingTarget.h"


#include <QMutex>
#include "vector"


using namespace std;


class LoadImageThread : public QThread
{
        Q_OBJECT
    public:
        explicit LoadImageThread();
        ~LoadImageThread();

        void setAutoSetting(bool v);
        void setBrightness(int v);
        void setContrast(int v);
        void setFolderName(QString folderName);
        void setSpeed(int v);
        void setForward(bool isForward);
        void setIsDrawContours(bool value);
        void setNumberOfCadr(int number);

        void stop();
        void pause();
        void resume();
        void next();
        void ago();
        void reset();
        void atFirst();
        void compressing(ushort *inputImg, uchar *outputImg, int sizeImage);





    private:
        ushort *_imgBufBolometr16;
        cv::Mat _matBolometr8;
        ushort *_imgBufKreol16;
        cv::Mat _matKreol8;
        int _gainBolom;
        int _brightBolom;
        bool _autoSetting;
        bool _pause, _pause1;
        QString _folderName;
        bool _live;
        SearchAndTrackingTarget _searchAndTrackingTargetBolometr;
        SearchAndTrackingTarget _searchAndTrackingTargetKreol;
        int _delay;
        int _x, _y;
        bool _isForward;
        QFile _fileBolometr, _fileKreol;
        QDataStream _dataStreamBolometr, _dataStreamKreol;
        QMutex _mutex;
        uchar *_resultImgBolometr, *_resultImgKreol;
        vector<uint> _badPixels;
        int *_masACalibr, *_masBCalibr;



        void run();

        void bolometrProcess();
        void kreolProcess();
        void drawAim(int x, int y, cv::Mat img);
        void adjustmentContrastAndBrigtness(ushort* img, uchar* outputImg, uint sizeImg, int contrast, int brigtness, bool autoCorrection = true);
        void alignImage(ushort *img, uint sizeImage);
        void deleteBadPixels(ushort *img);
        void update();

    signals:
        void DataIsReadyBolometr(uchar *img);
        void DataIsReadyKreol(uchar *img);
        void founded(bool value);
        void nozzleChanged(int value);
        void setMaxCadrCount(int count);
        void cadrNumberChanged(int number);

    private slots:
        void onFounded(bool value);
};

#endif // LOADIMAGETHREAD_H
