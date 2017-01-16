#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "OutputImageBolometr.h"
#include "OutputImageKreol.h"
#include <LoadImageThread.h>
#include <QFile>
#include "fstream"
#include <QDebug>
#include "iostream"
#include <QThread>
#include <QFileDialog>
#include <QEvent>
#include <QSlider>
#include <QMouseEvent>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;
        OutputImageBolometr _glOutputBolometr;
        OutputImageKreol _glOutputKreol;
        LoadImageThread _loadimage;
        bool _paused;
        void closeEvent(QCloseEvent *);
    private slots:

        void on_setMaxCadrCount(int count);
        void on_cadrNumberChanged(int number);

        void on_checkBox_clicked(bool checked);
        void on_pushButton_clicked();
        void on_sliderBrightness_valueChanged(int value);
        void on_sliderContrast_valueChanged(int value);
        void on_action_triggered();

        void on_pushButtonReplay_clicked();
        void on__sliderSpeed_valueChanged(int value);
        void on__pushButtonReplayAgo_clicked();
        void on__pushButtonForward_clicked();
        void onFounded(bool value);
        void onNuzzleChanged(int value);
        void on__buttonReset_clicked();
        void on__checkBoxDrawContours_clicked(bool checked);
        void on_horizontalSlider_sliderMoved(int position);
        void on__checkBoxDebug_clicked(bool checked);
};

#endif // MAINWINDOW_H
