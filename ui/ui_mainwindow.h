/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_game;
    QAction *actionC;
    QAction *actionCredits;
    QAction *actionExit;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *x1y0;
    QPushButton *x1y2;
    QFrame *line_2;
    QPushButton *x0y1;
    QFrame *line_11;
    QFrame *line_7;
    QFrame *line_10;
    QPushButton *x2y0;
    QPushButton *x1y1;
    QFrame *line_6;
    QFrame *line_8;
    QPushButton *x0y2;
    QPushButton *x2y2;
    QFrame *line_9;
    QFrame *line_3;
    QFrame *line_5;
    QFrame *line_4;
    QFrame *line;
    QPushButton *x2y1;
    QFrame *line_12;
    QPushButton *x0y0;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(618, 533);
        actionNew_game = new QAction(MainWindow);
        actionNew_game->setObjectName(QStringLiteral("actionNew_game"));
        actionC = new QAction(MainWindow);
        actionC->setObjectName(QStringLiteral("actionC"));
        actionCredits = new QAction(MainWindow);
        actionCredits->setObjectName(QStringLiteral("actionCredits"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 591, 451));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        x1y0 = new QPushButton(gridLayoutWidget);
        x1y0->setObjectName(QStringLiteral("x1y0"));
        x1y0->setStyleSheet(QLatin1String("width:100%;\n"
"height:100%;"));

        gridLayout->addWidget(x1y0, 0, 2, 1, 1);

        x1y2 = new QPushButton(gridLayoutWidget);
        x1y2->setObjectName(QStringLiteral("x1y2"));
        x1y2->setStyleSheet(QLatin1String("width:100%;\n"
"height:100%;"));

        gridLayout->addWidget(x1y2, 4, 2, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 2, 1, 1);

        x0y1 = new QPushButton(gridLayoutWidget);
        x0y1->setObjectName(QStringLiteral("x0y1"));
        x0y1->setStyleSheet(QLatin1String("width:100%;\n"
"height:100%;"));

        gridLayout->addWidget(x0y1, 2, 0, 1, 1);

        line_11 = new QFrame(gridLayoutWidget);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_11, 2, 3, 1, 1);

        line_7 = new QFrame(gridLayoutWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 4, 1, 1, 1);

        line_10 = new QFrame(gridLayoutWidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 4, 3, 1, 1);

        x2y0 = new QPushButton(gridLayoutWidget);
        x2y0->setObjectName(QStringLiteral("x2y0"));
        x2y0->setStyleSheet(QLatin1String("width:100%;\n"
"height:100%;"));

        gridLayout->addWidget(x2y0, 0, 4, 1, 1);

        x1y1 = new QPushButton(gridLayoutWidget);
        x1y1->setObjectName(QStringLiteral("x1y1"));
        x1y1->setStyleSheet(QLatin1String("width:100%;\n"
"height:100%;"));

        gridLayout->addWidget(x1y1, 2, 2, 1, 1);

        line_6 = new QFrame(gridLayoutWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 1, 4, 1, 1);

        line_8 = new QFrame(gridLayoutWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 2, 1, 1, 1);

        x0y2 = new QPushButton(gridLayoutWidget);
        x0y2->setObjectName(QStringLiteral("x0y2"));
        x0y2->setStyleSheet(QLatin1String("width:100%;\n"
"height:100%;"));

        gridLayout->addWidget(x0y2, 4, 0, 1, 1);

        x2y2 = new QPushButton(gridLayoutWidget);
        x2y2->setObjectName(QStringLiteral("x2y2"));
        x2y2->setStyleSheet(QLatin1String("width:100%;\n"
"height:100%;"));

        gridLayout->addWidget(x2y2, 4, 4, 1, 1);

        line_9 = new QFrame(gridLayoutWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 0, 1, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 3, 4, 1, 1);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 1, 2, 1, 1);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 1, 0, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 1);

        x2y1 = new QPushButton(gridLayoutWidget);
        x2y1->setObjectName(QStringLiteral("x2y1"));
        x2y1->setStyleSheet(QLatin1String("width:100%;\n"
"height:100%;"));

        gridLayout->addWidget(x2y1, 2, 4, 1, 1);

        line_12 = new QFrame(gridLayoutWidget);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_12, 0, 3, 1, 1);

        x0y0 = new QPushButton(gridLayoutWidget);
        x0y0->setObjectName(QStringLiteral("x0y0"));
        x0y0->setStyleSheet(QLatin1String("width:100%;\n"
"height:100%;"));

        gridLayout->addWidget(x0y0, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 618, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_game);
        menuFile->addAction(actionC);
        menuFile->addAction(actionCredits);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_game->setText(QApplication::translate("MainWindow", "New game", nullptr));
        actionC->setText(QApplication::translate("MainWindow", "Clear score table", nullptr));
        actionCredits->setText(QApplication::translate("MainWindow", "Credits", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        x1y0->setText(QString());
        x1y2->setText(QString());
        x0y1->setText(QString());
        x2y0->setText(QString());
        x1y1->setText(QString());
        x0y2->setText(QString());
        x2y2->setText(QString());
        x2y1->setText(QString());
        x0y0->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
