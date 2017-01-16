#include "OutputImageBolometr.h"

OutputImageBolometr::OutputImageBolometr()
{
    frame = new uchar[gl_sizeFrameOriginal];
    isAllowed=false;
    b = true;
}

OutputImageBolometr::~OutputImageBolometr()
{

}

void OutputImageBolometr::initializeGL()
{
    qglClearColor(Qt::red);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void OutputImageBolometr::resizeGL(int w, int h)
{
    glPixelZoom((GLfloat) ((float)w/(float)gl_widthOriginal), (GLfloat)((float)h/(float)gl_heightOriginal));
}
void OutputImageBolometr::paintGL()
{

    glClear(GL_COLOR_BUFFER_BIT);

    glDrawPixels((float)gl_widthOriginal, (float)gl_heightOriginal, GL_LUMINANCE, GL_UNSIGNED_BYTE, frame);

}

void OutputImageBolometr::updateGLL(uchar *img)
{
    _mutex.lock();

    for(int i=0; i<gl_heightOriginal; i++)
    {
        uchar* p0 = img+(gl_widthOriginal*i);
        uchar* p = frame +(gl_widthOriginal*(gl_heightOriginal-i-1));
        for(int j=0; j<gl_widthOriginal; j++)
        {
            p[j] = p0[j];
        }
    }

    isAllowed = true;
    this->updateGL();
    _mutex.unlock();
}

