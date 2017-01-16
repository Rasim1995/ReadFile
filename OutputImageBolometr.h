#ifndef OUTPUTIMAGE_H
#define OUTPUTIMAGE_H

#include <QGLWidget>
#include <QMutex>
#include <QDebug>
#include <QMouseEvent>
#include "iostream"
#include "Globals.h"
//#pragma comment (lib, "opengl32.lib")
//#pragma comment (lib, "glu32.lib")
//#pragma comment(lib,"glut32.lib")

class OutputImageBolometr : public QGLWidget
{
        Q_OBJECT
    public:
        explicit OutputImageBolometr();
         ~OutputImageBolometr();
        void initializeGL();
        void resizeGL(int w, int h);
        void paintGL();
        bool isAllowed;

        bool b;

    protected:
        uchar *frame;
        QMutex _mutex;

    signals:
        void mouseClicked(int x, int y);

    public slots:
        void updateGLL(uchar *img);
};

#endif // OUTPUTIMAGE_H
