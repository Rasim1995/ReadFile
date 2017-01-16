#-------------------------------------------------
#
# Project created by QtCreator 2016-10-19T19:08:23
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ReadFile
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    LoadImageThread.cpp \
    Globals.cpp \
    OutputImageBolometr.cpp \
    OutputImageKreol.cpp \
    SearchAndTrackingTarget.cpp

HEADERS  += MainWindow.h \
    LoadImageThread.h \
    Globals.h \
    OutputImageBolometr.h \
    OutputImageKreol.h \
    SearchAndTrackingTarget.h

FORMS    += MainWindow.ui

#INCLUDEPATH+=C://OpenCV31//buildmgw//install//include
#INCLUDEPATH+=E://Work//detector//SearchAndTrackingTargetLibrary



#LIBS+=C://OpenCV31//buildmgw//bin//libopencv_imgproc310.dll
#LIBS+=C://OpenCV31//buildmgw//bin//libopencv_core310.dll
#LIBS+=C://OpenCV31//buildmgw//bin//libopencv_imgcodecs310.dll
#LIBS+=C://OpenCV31//buildmgw//bin//libopencv_highgui310.dll


#LIBS+=C://Users//Rasim//Documents//QTProjects//SearchAndTrackingTargetLibrary//release//libSearchAndTrackingTargetLibrary.a
#LIBS+=C://Users//Rasim//Documents//QTProjects//SearchAndTrackingTargetLibrary//release//SearchAndTrackingTargetLibrary.dll






win32:CONFIG(release, debug|release): LIBS += -LC:/OpenCV31/build/x64/vc14/lib/ -lopencv_world310
else:win32:CONFIG(debug, debug|release): LIBS += -LC:/OpenCV31/build/x64/vc14/lib/ -lopencv_world310d

INCLUDEPATH += C:/OpenCV31/build/include
DEPENDPATH += C:/OpenCV31/build/include

#8542354
