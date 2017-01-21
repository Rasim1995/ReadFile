/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QScrollArea *sceeneBolometr;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *sceeneKreol;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLabel *_labelBrightness;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *_checkBoxDebug;
    QCheckBox *_checkBoxDrawContours;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *_buttonReset;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButtonReplay;
    QPushButton *_pushButtonReplayAgo;
    QPushButton *_pushButtonForward;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QSlider *_sliderSpeed;
    QSlider *sliderBrightness;
    QLabel *_labelBrigh;
    QLabel *_labelSpeed;
    QLabel *_labelContrast;
    QLabel *label_5;
    QLabel *label_2;
    QSlider *sliderContrast;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QSlider *horizontalSlider;
    QLabel *textLabelCadrCount;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(705, 583);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setMinimumSize(QSize(0, 0));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        sceeneBolometr = new QScrollArea(splitter);
        sceeneBolometr->setObjectName(QStringLiteral("sceeneBolometr"));
        sceeneBolometr->setEnabled(true);
        sizePolicy1.setHeightForWidth(sceeneBolometr->sizePolicy().hasHeightForWidth());
        sceeneBolometr->setSizePolicy(sizePolicy1);
        sceeneBolometr->setMinimumSize(QSize(320, 256));
        sceeneBolometr->setSizeIncrement(QSize(0, 0));
        sceeneBolometr->setBaseSize(QSize(0, 0));
        sceeneBolometr->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 339, 267));
        sceeneBolometr->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(sceeneBolometr);
        sceeneKreol = new QScrollArea(splitter);
        sceeneKreol->setObjectName(QStringLiteral("sceeneKreol"));
        sceeneKreol->setEnabled(true);
        sizePolicy1.setHeightForWidth(sceeneKreol->sizePolicy().hasHeightForWidth());
        sceeneKreol->setSizePolicy(sizePolicy1);
        sceeneKreol->setMinimumSize(QSize(320, 256));
        sceeneKreol->setSizeIncrement(QSize(0, 0));
        sceeneKreol->setBaseSize(QSize(0, 0));
        sceeneKreol->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 338, 267));
        sceeneKreol->setWidget(scrollAreaWidgetContents_2);
        splitter->addWidget(sceeneKreol);

        verticalLayout_3->addWidget(splitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setMinimumSize(QSize(0, 0));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_3);

        _labelBrightness = new QLabel(groupBox_2);
        _labelBrightness->setObjectName(QStringLiteral("_labelBrightness"));
        sizePolicy.setHeightForWidth(_labelBrightness->sizePolicy().hasHeightForWidth());
        _labelBrightness->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(_labelBrightness);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        _checkBoxDebug = new QCheckBox(groupBox_3);
        _checkBoxDebug->setObjectName(QStringLiteral("_checkBoxDebug"));

        horizontalLayout_7->addWidget(_checkBoxDebug);

        _checkBoxDrawContours = new QCheckBox(groupBox_3);
        _checkBoxDrawContours->setObjectName(QStringLiteral("_checkBoxDrawContours"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(_checkBoxDrawContours->sizePolicy().hasHeightForWidth());
        _checkBoxDrawContours->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(_checkBoxDrawContours);


        gridLayout_2->addLayout(horizontalLayout_7, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        _buttonReset = new QPushButton(centralWidget);
        _buttonReset->setObjectName(QStringLiteral("_buttonReset"));
        _buttonReset->setEnabled(false);
        sizePolicy3.setHeightForWidth(_buttonReset->sizePolicy().hasHeightForWidth());
        _buttonReset->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(_buttonReset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pushButton);

        pushButtonReplay = new QPushButton(centralWidget);
        pushButtonReplay->setObjectName(QStringLiteral("pushButtonReplay"));
        sizePolicy3.setHeightForWidth(pushButtonReplay->sizePolicy().hasHeightForWidth());
        pushButtonReplay->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pushButtonReplay);

        _pushButtonReplayAgo = new QPushButton(centralWidget);
        _pushButtonReplayAgo->setObjectName(QStringLiteral("_pushButtonReplayAgo"));
        sizePolicy3.setHeightForWidth(_pushButtonReplayAgo->sizePolicy().hasHeightForWidth());
        _pushButtonReplayAgo->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(_pushButtonReplayAgo);

        _pushButtonForward = new QPushButton(centralWidget);
        _pushButtonForward->setObjectName(QStringLiteral("_pushButtonForward"));
        sizePolicy3.setHeightForWidth(_pushButtonForward->sizePolicy().hasHeightForWidth());
        _pushButtonForward->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(_pushButtonForward);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy4);
        checkBox->setCheckable(true);
        checkBox->setChecked(true);

        horizontalLayout_3->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        _sliderSpeed = new QSlider(groupBox);
        _sliderSpeed->setObjectName(QStringLiteral("_sliderSpeed"));
        sizePolicy2.setHeightForWidth(_sliderSpeed->sizePolicy().hasHeightForWidth());
        _sliderSpeed->setSizePolicy(sizePolicy2);
        _sliderSpeed->setMaximum(500);
        _sliderSpeed->setValue(480);
        _sliderSpeed->setTracking(true);
        _sliderSpeed->setOrientation(Qt::Horizontal);
        _sliderSpeed->setInvertedAppearance(false);
        _sliderSpeed->setInvertedControls(true);
        _sliderSpeed->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(_sliderSpeed, 3, 1, 1, 1);

        sliderBrightness = new QSlider(groupBox);
        sliderBrightness->setObjectName(QStringLiteral("sliderBrightness"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(sliderBrightness->sizePolicy().hasHeightForWidth());
        sliderBrightness->setSizePolicy(sizePolicy5);
        sliderBrightness->setMaximum(5000);
        sliderBrightness->setValue(60);
        sliderBrightness->setOrientation(Qt::Horizontal);
        sliderBrightness->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(sliderBrightness, 1, 1, 1, 1);

        _labelBrigh = new QLabel(groupBox);
        _labelBrigh->setObjectName(QStringLiteral("_labelBrigh"));
        sizePolicy2.setHeightForWidth(_labelBrigh->sizePolicy().hasHeightForWidth());
        _labelBrigh->setSizePolicy(sizePolicy2);
        _labelBrigh->setMinimumSize(QSize(28, 0));

        gridLayout->addWidget(_labelBrigh, 1, 2, 1, 1);

        _labelSpeed = new QLabel(groupBox);
        _labelSpeed->setObjectName(QStringLiteral("_labelSpeed"));
        sizePolicy.setHeightForWidth(_labelSpeed->sizePolicy().hasHeightForWidth());
        _labelSpeed->setSizePolicy(sizePolicy);
        _labelSpeed->setMinimumSize(QSize(28, 0));

        gridLayout->addWidget(_labelSpeed, 3, 2, 1, 1);

        _labelContrast = new QLabel(groupBox);
        _labelContrast->setObjectName(QStringLiteral("_labelContrast"));
        sizePolicy2.setHeightForWidth(_labelContrast->sizePolicy().hasHeightForWidth());
        _labelContrast->setSizePolicy(sizePolicy2);
        _labelContrast->setMinimumSize(QSize(28, 0));

        gridLayout->addWidget(_labelContrast, 2, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        sliderContrast = new QSlider(groupBox);
        sliderContrast->setObjectName(QStringLiteral("sliderContrast"));
        sizePolicy5.setHeightForWidth(sliderContrast->sizePolicy().hasHeightForWidth());
        sliderContrast->setSizePolicy(sizePolicy5);
        sliderContrast->setMaximum(6000);
        sliderContrast->setSingleStep(1);
        sliderContrast->setPageStep(10);
        sliderContrast->setValue(3000);
        sliderContrast->setOrientation(Qt::Horizontal);
        sliderContrast->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(sliderContrast, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setBaseSize(QSize(4, 0));

        gridLayout->addWidget(label, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_2->addWidget(groupBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(0, 1);

        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider);

        textLabelCadrCount = new QLabel(centralWidget);
        textLabelCadrCount->setObjectName(QStringLiteral("textLabelCadrCount"));
        textLabelCadrCount->setEnabled(true);
        textLabelCadrCount->setMinimumSize(QSize(50, 0));

        horizontalLayout_5->addWidget(textLabelCadrCount);


        gridLayout_4->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 705, 20));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        _labelBrigh->setBuddy(sliderBrightness);
        _labelContrast->setBuddy(sliderContrast);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);
        QObject::connect(sliderBrightness, SIGNAL(valueChanged(int)), _labelBrigh, SLOT(setNum(int)));
        QObject::connect(sliderContrast, SIGNAL(valueChanged(int)), _labelContrast, SLOT(setNum(int)));
        QObject::connect(_sliderSpeed, SIGNAL(valueChanged(int)), _labelSpeed, SLOT(setNum(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), textLabelCadrCount, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\257\321\200\320\272\320\276\321\201\321\202\321\214 \321\201\320\276\320\277\320\273\320\260:", Q_NULLPTR));
        _labelBrightness->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\236\321\202\320\273\320\260\320\264\320\272\320\260", Q_NULLPTR));
        _checkBoxDebug->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\276\321\207\320\275\321\213\321\205 \n"
"\320\272\320\260\320\264\321\200\320\276\320\262", Q_NULLPTR));
        _checkBoxDrawContours->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214 \320\272\320\276\320\275\321\202\321\203\321\200\321\213", Q_NULLPTR));
        _buttonReset->setText(QApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\203\320\267\320\260", Q_NULLPTR));
        pushButtonReplay->setText(QApplication::translate("MainWindow", "\320\241 \320\275\320\260\321\207\320\260\320\273\320\260", Q_NULLPTR));
        _pushButtonReplayAgo->setText(QApplication::translate("MainWindow", "<<<", Q_NULLPTR));
        _pushButtonForward->setText(QApplication::translate("MainWindow", ">>>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276", Q_NULLPTR));
        _labelBrigh->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        _labelSpeed->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        _labelContrast->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\200\320\260\321\201\321\202", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\257\321\200\320\272\320\276\321\201\321\202\321\214", Q_NULLPTR));
        textLabelCadrCount->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
