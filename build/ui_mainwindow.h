/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Korrektur;
    QPushButton *pushButton_3;
    QPushButton *pushButton_Abbruch;
    QPushButton *pushButton_2;
    QPushButton *pushButton_r;
    QPushButton *pushButton_hilfe;
    QPushButton *pushButton_Bestaetigung;
    QFrame *frame_2;
    QPushButton *Karte_3;
    QPushButton *Karte_2;
    QPushButton *Karte_1;
    QPushButton *Kartenleser;
    QLabel *ausgabe;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Einzahlung;
    QPushButton *pushButton_Auszahlung;
    QPushButton *pushButton_Kontostand;
    QPushButton *pushButton_PIN_aendern;
    QFrame *frame_4;
    QPushButton *fuenf;
    QPushButton *zehner;
    QPushButton *zwanny;
    QPushButton *fuffy;
    QPushButton *pushButton_10;
    QPushButton *HILFE_BUTTON;
    QFrame *frame_Auszahlung;
    QPushButton *Auszahlung_5;
    QPushButton *Auszahlung_50;
    QPushButton *Auszahlung_10;
    QPushButton *Auszahlung_20;
    QPushButton *Auszahlung_100;
    QPushButton *Auszahlung_200;
    QPushButton *Auszahlung_500;
    QPushButton *Auszahlung_andererBetrag;
    QLabel *Ausgabe_Einzahlungsbetrag;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1300, 800);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        frame = new QFrame(MainWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(390, 370, 450, 251));
        frame->setInputMethodHints(Qt::ImhNone);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_7->setIconSize(QSize(20, 20));
        pushButton_7->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_9->setIconSize(QSize(20, 20));
        pushButton_9->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_8->setIconSize(QSize(20, 20));
        pushButton_8->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_4->setIconSize(QSize(20, 20));
        pushButton_4->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_6->setIconSize(QSize(20, 20));
        pushButton_6->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_1 = new QPushButton(frame);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_1->setIconSize(QSize(20, 20));
        pushButton_1->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_1, 2, 0, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton->setIconSize(QSize(20, 20));
        pushButton->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_5->setIconSize(QSize(20, 20));
        pushButton_5->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_0 = new QPushButton(frame);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_0->setIconSize(QSize(20, 20));
        pushButton_0->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButton_Korrektur = new QPushButton(frame);
        pushButton_Korrektur->setObjectName(QStringLiteral("pushButton_Korrektur"));
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        pushButton_Korrektur->setFont(font1);
        pushButton_Korrektur->setToolTipDuration(-1);
        pushButton_Korrektur->setStyleSheet(QLatin1String("color: rgb(255, 213, 40);\n"
"background-color: rgb(230, 230, 230);"));
        pushButton_Korrektur->setIconSize(QSize(20, 20));
        pushButton_Korrektur->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_Korrektur, 1, 3, 1, 1);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_3->setIconSize(QSize(20, 20));
        pushButton_3->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_Abbruch = new QPushButton(frame);
        pushButton_Abbruch->setObjectName(QStringLiteral("pushButton_Abbruch"));
        pushButton_Abbruch->setFont(font1);
        pushButton_Abbruch->setStyleSheet(QLatin1String("color: rgb(150, 16, 12);\n"
"background-color: rgb(230, 230, 230);"));
        pushButton_Abbruch->setIconSize(QSize(20, 20));
        pushButton_Abbruch->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_Abbruch, 2, 3, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_2->setIconSize(QSize(20, 20));
        pushButton_2->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_r = new QPushButton(frame);
        pushButton_r->setObjectName(QStringLiteral("pushButton_r"));
        pushButton_r->setFont(font);
        pushButton_r->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));
        pushButton_r->setIconSize(QSize(20, 20));
        pushButton_r->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_r, 3, 2, 1, 1);

        pushButton_hilfe = new QPushButton(frame);
        pushButton_hilfe->setObjectName(QStringLiteral("pushButton_hilfe"));
        pushButton_hilfe->setFont(font1);
        pushButton_hilfe->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(230, 230, 230);"));
        pushButton_hilfe->setIconSize(QSize(20, 20));
        pushButton_hilfe->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_hilfe, 0, 3, 1, 1);

        pushButton_Bestaetigung = new QPushButton(frame);
        pushButton_Bestaetigung->setObjectName(QStringLiteral("pushButton_Bestaetigung"));
        pushButton_Bestaetigung->setFont(font1);
        pushButton_Bestaetigung->setStyleSheet(QLatin1String("color: rgb(45, 213, 26);\n"
"background-color: rgb(230, 230, 230)"));
        pushButton_Bestaetigung->setIconSize(QSize(20, 20));
        pushButton_Bestaetigung->setAutoRepeatDelay(306);

        gridLayout->addWidget(pushButton_Bestaetigung, 3, 3, 1, 1);

        MainWindow->setCentralWidget(frame);
        frame_2 = new QFrame(MainWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(1000, 130, 271, 121));
        frame_2->setCursor(QCursor(Qt::PointingHandCursor));
        frame_2->setToolTipDuration(1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Sunken);
        Karte_3 = new QPushButton(frame_2);
        Karte_3->setObjectName(QStringLiteral("Karte_3"));
        Karte_3->setGeometry(QRect(186, 7, 61, 101));
        Karte_3->setStyleSheet(QStringLiteral("background-color: green; border: none; "));
        Karte_3->setIconSize(QSize(16, 16));
        Karte_2 = new QPushButton(frame_2);
        Karte_2->setObjectName(QStringLiteral("Karte_2"));
        Karte_2->setGeometry(QRect(99, 7, 61, 101));
        Karte_2->setStyleSheet(QStringLiteral("background-color: blue; border: none; "));
        Karte_1 = new QPushButton(frame_2);
        Karte_1->setObjectName(QStringLiteral("Karte_1"));
        Karte_1->setEnabled(true);
        Karte_1->setGeometry(QRect(13, 7, 61, 101));
        Karte_1->setStyleSheet(QStringLiteral("background-color: red; border: none; "));
        Karte_1->setAutoRepeatDelay(300);
        MainWindow->setCentralWidget(frame_2);
        Kartenleser = new QPushButton(MainWindow);
        Kartenleser->setObjectName(QStringLiteral("Kartenleser"));
        Kartenleser->setGeometry(QRect(990, 20, 281, 101));
        Kartenleser->setStyleSheet(QLatin1String("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: black;"));
        MainWindow->setCentralWidget(Kartenleser);
        ausgabe = new QLabel(MainWindow);
        ausgabe->setObjectName(QStringLiteral("ausgabe"));
        ausgabe->setGeometry(QRect(390, 20, 450, 341));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(20);
        font2.setItalic(true);
        ausgabe->setFont(font2);
        ausgabe->setStyleSheet(QLatin1String("border-width: 1px;\n"
"border-style: solid;\n"
"border-color: black;"));
        ausgabe->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(ausgabe);
        frame_3 = new QFrame(MainWindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(240, 20, 127, 341));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_Einzahlung = new QPushButton(frame_3);
        pushButton_Einzahlung->setObjectName(QStringLiteral("pushButton_Einzahlung"));
        pushButton_Einzahlung->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));

        verticalLayout->addWidget(pushButton_Einzahlung);

        pushButton_Auszahlung = new QPushButton(frame_3);
        pushButton_Auszahlung->setObjectName(QStringLiteral("pushButton_Auszahlung"));
        pushButton_Auszahlung->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));

        verticalLayout->addWidget(pushButton_Auszahlung);

        pushButton_Kontostand = new QPushButton(frame_3);
        pushButton_Kontostand->setObjectName(QStringLiteral("pushButton_Kontostand"));
        pushButton_Kontostand->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));

        verticalLayout->addWidget(pushButton_Kontostand);

        pushButton_PIN_aendern = new QPushButton(frame_3);
        pushButton_PIN_aendern->setObjectName(QStringLiteral("pushButton_PIN_aendern"));
        pushButton_PIN_aendern->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230)"));

        verticalLayout->addWidget(pushButton_PIN_aendern);

        MainWindow->setCentralWidget(frame_3);
        frame_4 = new QFrame(MainWindow);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(860, 130, 261, 491));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        fuenf = new QPushButton(frame_4);
        fuenf->setObjectName(QStringLiteral("fuenf"));
        fuenf->setGeometry(QRect(13, 11, 240, 110));
        fuenf->setStyleSheet(QStringLiteral("border-image:url(:funf.jpg);"));
        fuenf->setIconSize(QSize(15, 15));
        zehner = new QPushButton(frame_4);
        zehner->setObjectName(QStringLiteral("zehner"));
        zehner->setGeometry(QRect(10, 130, 240, 110));
        zehner->setStyleSheet(QStringLiteral("border-image:url(:zehn.jpg);"));
        zehner->setIconSize(QSize(15, 15));
        zwanny = new QPushButton(frame_4);
        zwanny->setObjectName(QStringLiteral("zwanny"));
        zwanny->setGeometry(QRect(10, 250, 240, 110));
        zwanny->setStyleSheet(QStringLiteral("border-image:url(:zwanzig.jpg);"));
        zwanny->setIconSize(QSize(15, 15));
        fuffy = new QPushButton(frame_4);
        fuffy->setObjectName(QStringLiteral("fuffy"));
        fuffy->setGeometry(QRect(10, 370, 240, 110));
        fuffy->setStyleSheet(QStringLiteral("border-image:url(:funfzig.jpg);"));
        fuffy->setIconSize(QSize(15, 15));
        MainWindow->setCentralWidget(frame_4);
        pushButton_10 = new QPushButton(MainWindow);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(0, 370, 381, 251));
        pushButton_10->setStyleSheet(QStringLiteral("background-color:rgb(35, 168, 255)"));
        MainWindow->setCentralWidget(pushButton_10);
        HILFE_BUTTON = new QPushButton(MainWindow);
        HILFE_BUTTON->setObjectName(QStringLiteral("HILFE_BUTTON"));
        HILFE_BUTTON->setGeometry(QRect(70, 150, 113, 121));
        QFont font3;
        font3.setPointSize(110);
        font3.setBold(true);
        font3.setWeight(75);
        HILFE_BUTTON->setFont(font3);
        HILFE_BUTTON->setStyleSheet(QLatin1String("color: rgb(49, 255, 46);\n"
"background-color:rgb(15, 98, 19)"));
        MainWindow->setCentralWidget(HILFE_BUTTON);
        frame_Auszahlung = new QFrame(MainWindow);
        frame_Auszahlung->setObjectName(QStringLiteral("frame_Auszahlung"));
        frame_Auszahlung->setGeometry(QRect(390, 19, 451, 341));
        frame_Auszahlung->setFrameShape(QFrame::StyledPanel);
        frame_Auszahlung->setFrameShadow(QFrame::Raised);
        Auszahlung_5 = new QPushButton(frame_Auszahlung);
        Auszahlung_5->setObjectName(QStringLiteral("Auszahlung_5"));
        Auszahlung_5->setGeometry(QRect(20, 20, 151, 71));
        Auszahlung_50 = new QPushButton(frame_Auszahlung);
        Auszahlung_50->setObjectName(QStringLiteral("Auszahlung_50"));
        Auszahlung_50->setGeometry(QRect(20, 230, 151, 71));
        Auszahlung_10 = new QPushButton(frame_Auszahlung);
        Auszahlung_10->setObjectName(QStringLiteral("Auszahlung_10"));
        Auszahlung_10->setGeometry(QRect(20, 90, 151, 71));
        Auszahlung_20 = new QPushButton(frame_Auszahlung);
        Auszahlung_20->setObjectName(QStringLiteral("Auszahlung_20"));
        Auszahlung_20->setGeometry(QRect(20, 160, 151, 71));
        Auszahlung_100 = new QPushButton(frame_Auszahlung);
        Auszahlung_100->setObjectName(QStringLiteral("Auszahlung_100"));
        Auszahlung_100->setGeometry(QRect(260, 20, 151, 71));
        Auszahlung_200 = new QPushButton(frame_Auszahlung);
        Auszahlung_200->setObjectName(QStringLiteral("Auszahlung_200"));
        Auszahlung_200->setGeometry(QRect(260, 90, 151, 71));
        Auszahlung_500 = new QPushButton(frame_Auszahlung);
        Auszahlung_500->setObjectName(QStringLiteral("Auszahlung_500"));
        Auszahlung_500->setGeometry(QRect(260, 160, 151, 71));
        Auszahlung_andererBetrag = new QPushButton(frame_Auszahlung);
        Auszahlung_andererBetrag->setObjectName(QStringLiteral("Auszahlung_andererBetrag"));
        Auszahlung_andererBetrag->setGeometry(QRect(260, 230, 151, 71));
        MainWindow->setCentralWidget(frame_Auszahlung);
        Ausgabe_Einzahlungsbetrag = new QLabel(MainWindow);
        Ausgabe_Einzahlungsbetrag->setObjectName(QStringLiteral("Ausgabe_Einzahlungsbetrag"));
        Ausgabe_Einzahlungsbetrag->setGeometry(QRect(310, 630, 60, 16));
        Ausgabe_Einzahlungsbetrag->setStyleSheet(QLatin1String("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: black;"));
        MainWindow->setCentralWidget(Ausgabe_Einzahlungsbetrag);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_Korrektur->setText(QApplication::translate("MainWindow", "Korrektur", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_Abbruch->setText(QApplication::translate("MainWindow", "Abbruch", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_r->setText(QApplication::translate("MainWindow", "#", nullptr));
        pushButton_hilfe->setText(QApplication::translate("MainWindow", "Hilfe", nullptr));
        pushButton_Bestaetigung->setText(QApplication::translate("MainWindow", "Best\303\244tigen", nullptr));
        Karte_3->setText(QApplication::translate("MainWindow", "Karte 3", nullptr));
        Karte_2->setText(QApplication::translate("MainWindow", "Karte 2", nullptr));
        Karte_1->setText(QApplication::translate("MainWindow", "Karte 1", nullptr));
        Kartenleser->setText(QApplication::translate("MainWindow", "______________________________________", nullptr));
        ausgabe->setText(QApplication::translate("MainWindow", "Bitte Schieben Sie Ihre Karte ein!", nullptr));
        pushButton_Einzahlung->setText(QApplication::translate("MainWindow", "Einzahlung", nullptr));
        pushButton_Auszahlung->setText(QApplication::translate("MainWindow", "Auszahlung", nullptr));
        pushButton_Kontostand->setText(QApplication::translate("MainWindow", "Kontostand", nullptr));
        pushButton_PIN_aendern->setText(QApplication::translate("MainWindow", "PIN \303\204ndern", nullptr));
        fuenf->setText(QString());
        zehner->setText(QString());
        zwanny->setText(QString());
        fuffy->setText(QString());
        pushButton_10->setText(QApplication::translate("MainWindow", "Ich bin ein Geldfach", nullptr));
        HILFE_BUTTON->setText(QApplication::translate("MainWindow", "?", nullptr));
        Auszahlung_5->setText(QApplication::translate("MainWindow", "5 \342\202\254", nullptr));
        Auszahlung_50->setText(QApplication::translate("MainWindow", "50 \342\202\254", nullptr));
        Auszahlung_10->setText(QApplication::translate("MainWindow", "10 \342\202\254", nullptr));
        Auszahlung_20->setText(QApplication::translate("MainWindow", "20 \342\202\254", nullptr));
        Auszahlung_100->setText(QApplication::translate("MainWindow", "100 \342\202\254", nullptr));
        Auszahlung_200->setText(QApplication::translate("MainWindow", "200 \342\202\254", nullptr));
        Auszahlung_500->setText(QApplication::translate("MainWindow", "500 \342\202\254", nullptr));
        Auszahlung_andererBetrag->setText(QApplication::translate("MainWindow", "Anderer Betrag", nullptr));
        Ausgabe_Einzahlungsbetrag->setText(QApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
