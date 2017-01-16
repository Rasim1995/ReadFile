#include "MainWindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.addLibraryPath("C:/customPath/plugins");
    MainWindow w;
    w.show();

    return a.exec();
}
