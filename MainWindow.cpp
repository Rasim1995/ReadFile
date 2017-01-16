#include "MainWindow.h"
#include "ui_MainWindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->sceeneBolometr->setWidget(&_glOutputBolometr);
    ui->sceeneKreol->setWidget(&_glOutputKreol);
    this->_paused=false;



    ui->_sliderSpeed->setValue(400);

    _loadimage.setIsDrawContours(ui->_checkBoxDrawContours->isChecked());

    connect(&_loadimage, SIGNAL(DataIsReadyBolometr(uchar*)),
            &_glOutputBolometr, SLOT(updateGLL(uchar*)));

    connect(&_loadimage, SIGNAL(DataIsReadyKreol(uchar*)),
            &_glOutputKreol, SLOT(updateGLL(uchar*)));

    connect(&_loadimage, SIGNAL(founded(bool)),
            this, SLOT(onFounded(bool)));

    connect(&_loadimage, SIGNAL(nozzleChanged(int)),
            this, SLOT(onNuzzleChanged(int)));

    connect(&_loadimage, SIGNAL(setMaxCadrCount(int)),
            this, SLOT(on_setMaxCadrCount(int)));

    connect(&_loadimage, SIGNAL(cadrNumberChanged(int)),
            this, SLOT(on_cadrNumberChanged(int)));

     on_action_triggered();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *)
{
    _loadimage.stop();
}

void MainWindow::on_setMaxCadrCount(int count)
{
    ui->horizontalSlider->setMaximum(count);
    ui->horizontalSlider->setEnabled(true);
}

void MainWindow::on_cadrNumberChanged(int number)
{
    ui->horizontalSlider->setValue(number);
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    this->_loadimage.setAutoSetting(checked);
    emit ui->sliderBrightness->valueChanged(ui->sliderBrightness->value());
    emit ui->sliderContrast->valueChanged(ui->sliderContrast->value());
}

void MainWindow::on_pushButton_clicked()
{
    if(!_paused)
    {
        _loadimage.pause();
        ui->pushButton->setText(QString("Продолжить"));
    }
    else
    {
        _loadimage.resume();
        ui->pushButton->setText(QString("Пауза"));
    }

    _paused=!_paused;
}

void MainWindow::on_sliderBrightness_valueChanged(int value)
{
    this->_loadimage.setBrightness(value);
}

void MainWindow::on_sliderContrast_valueChanged(int value)
{
    this->_loadimage.setContrast(value);
}

void MainWindow::on_action_triggered()
{
    QString folderName = QFileDialog::getExistingDirectory(this);
//    QString folderName = "E:/Work/Дезодорант/13_09_2016 12_08_26";

    if(folderName.isEmpty())
        return;
    this->_loadimage.setFolderName(folderName);

    ui->pushButton->setEnabled(true);
    this->setWindowTitle(folderName);
}

void MainWindow::on_pushButtonReplay_clicked()
{
    _loadimage.atFirst();
}

void MainWindow::on__sliderSpeed_valueChanged(int value)
{
    this->_loadimage.setSpeed(value);
}

void MainWindow::on__pushButtonReplayAgo_clicked()
{
    _loadimage.ago();
}

void MainWindow::on__pushButtonForward_clicked()
{
    _loadimage.next();
}

void MainWindow::onFounded(bool value)
{
    ui->_buttonReset->setEnabled(value);
}

void MainWindow::onNuzzleChanged(int value)
{
    ui->_labelBrightness->setText(QString::number(value));
}

void MainWindow::on__buttonReset_clicked()
{
    _loadimage.reset();
}

void MainWindow::on__checkBoxDrawContours_clicked(bool checked)
{
    _loadimage.setIsDrawContours(checked);
}

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    _loadimage.setNumberOfCadr(position);
}

void MainWindow::on__checkBoxDebug_clicked(bool checked)
{
    gl_debug = checked;
}
