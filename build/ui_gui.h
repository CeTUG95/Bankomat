/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QWidget *centralwidget;
    QFrame *Tastatur;
    QGridLayout *gridLayout;
    QPushButton *pushButton_11;
    QPushButton *pushButton_0;
    QPushButton *pushButton_13;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QLabel *Ausgabe;
    QPushButton *Kartenschlitz;
    QFrame *Karten;
    QVBoxLayout *verticalLayout;
    QPushButton *Karte_4;
    QPushButton *Karte_1;
    QPushButton *Karte_2;
    QPushButton *Karte_3;
    QFrame *Geldscheine;
    QPushButton *funfeuroschein;
    QPushButton *zehneuroschein;
    QPushButton *zwanzigeuroschein;
    QPushButton *funfzigeuroschein;
    QPushButton *Geldfach_B;
    QFrame *Menu;
    QPushButton *Einzahlen_B;
    QPushButton *Auszahlen_B;
    QPushButton *Kontostand_B;
    QPushButton *PIN_AE_B;
    QFrame *Menu_Auszahlen;
    QPushButton *AB_5;
    QPushButton *AB_10;
    QPushButton *AB_50;
    QPushButton *AB_100;
    QPushButton *AB_200;
    QPushButton *AB_Anderer_Betrag;
    QLabel *Einzahlungsbetrag_Label;
    QFrame *Aktionstasten;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Hilfe;
    QPushButton *pushButton_Korrektur;
    QPushButton *pushButton_Abbrechen;
    QPushButton *pushButton_Bestaetigen;
    QLabel *auswahl;
    QLabel *Menu_Pin;
    QLabel *Menu_Kontostand;
    QFrame *Pin_Anforderung;
    QTextEdit *textEdit;
    QLabel *PIN_Label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName(QStringLiteral("GUI"));
        GUI->resize(1284, 856);
        centralwidget = new QWidget(GUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Tastatur = new QFrame(centralwidget);
        Tastatur->setObjectName(QStringLiteral("Tastatur"));
        Tastatur->setGeometry(QRect(220, 410, 261, 271));
        Tastatur->setStyleSheet(QStringLiteral(""));
        Tastatur->setFrameShape(QFrame::StyledPanel);
        Tastatur->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(Tastatur);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_11 = new QPushButton(Tastatur);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_11->setFont(font);
        pushButton_11->setCursor(QCursor(Qt::ForbiddenCursor));
        pushButton_11->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_11, 3, 2, 1, 1);

        pushButton_0 = new QPushButton(Tastatur);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setFont(font);
        pushButton_0->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_0->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButton_13 = new QPushButton(Tastatur);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setEnabled(false);
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setFont(font);
        pushButton_13->setCursor(QCursor(Qt::ForbiddenCursor));
        pushButton_13->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_13, 3, 0, 1, 1);

        pushButton_9 = new QPushButton(Tastatur);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font);
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_8 = new QPushButton(Tastatur);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_7 = new QPushButton(Tastatur);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(Tastatur);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(Tastatur);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(Tastatur);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(Tastatur);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_1 = new QPushButton(Tastatur);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setFont(font);
        pushButton_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_1->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(Tastatur);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QStringLiteral("background-color:silver;"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        Ausgabe = new QLabel(centralwidget);
        Ausgabe->setObjectName(QStringLiteral("Ausgabe"));
        Ausgabe->setGeometry(QRect(9, 35, 571, 361));
        Ausgabe->setStyleSheet(QLatin1String("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: black;\n"
""));
        Ausgabe->setAlignment(Qt::AlignCenter);
        Kartenschlitz = new QPushButton(centralwidget);
        Kartenschlitz->setObjectName(QStringLiteral("Kartenschlitz"));
        Kartenschlitz->setGeometry(QRect(590, 40, 291, 91));
        Kartenschlitz->setFont(font);
        Kartenschlitz->setCursor(QCursor(Qt::UpArrowCursor));
        Kartenschlitz->setToolTipDuration(2);
        Kartenschlitz->setStyleSheet(QLatin1String("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: white;\n"
""));
        Karten = new QFrame(centralwidget);
        Karten->setObjectName(QStringLiteral("Karten"));
        Karten->setGeometry(QRect(590, 130, 291, 541));
        Karten->setFrameShape(QFrame::StyledPanel);
        Karten->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(Karten);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Karte_4 = new QPushButton(Karten);
        Karte_4->setObjectName(QStringLiteral("Karte_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Karte_4->sizePolicy().hasHeightForWidth());
        Karte_4->setSizePolicy(sizePolicy1);
        Karte_4->setCursor(QCursor(Qt::OpenHandCursor));
        Karte_4->setStyleSheet(QStringLiteral("border-image:url(:/MensaCard.jpg)"));
        Karte_4->setInputMethodHints(Qt::ImhHiddenText);
        Karte_4->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(Karte_4);

        Karte_1 = new QPushButton(Karten);
        Karte_1->setObjectName(QStringLiteral("Karte_1"));
        sizePolicy.setHeightForWidth(Karte_1->sizePolicy().hasHeightForWidth());
        Karte_1->setSizePolicy(sizePolicy);
        Karte_1->setCursor(QCursor(Qt::OpenHandCursor));
        Karte_1->setStyleSheet(QStringLiteral("border-image:url(:/CBK.jpg)"));

        verticalLayout->addWidget(Karte_1);

        Karte_2 = new QPushButton(Karten);
        Karte_2->setObjectName(QStringLiteral("Karte_2"));
        sizePolicy.setHeightForWidth(Karte_2->sizePolicy().hasHeightForWidth());
        Karte_2->setSizePolicy(sizePolicy);
        Karte_2->setCursor(QCursor(Qt::OpenHandCursor));
        Karte_2->setStyleSheet(QStringLiteral("border-image:url(:/DBK2.jpg)"));

        verticalLayout->addWidget(Karte_2);

        Karte_3 = new QPushButton(Karten);
        Karte_3->setObjectName(QStringLiteral("Karte_3"));
        sizePolicy.setHeightForWidth(Karte_3->sizePolicy().hasHeightForWidth());
        Karte_3->setSizePolicy(sizePolicy);
        Karte_3->setCursor(QCursor(Qt::OpenHandCursor));
        Karte_3->setStyleSheet(QStringLiteral("border-image:url(:/DBK1.jpg)"));

        verticalLayout->addWidget(Karte_3);

        Geldscheine = new QFrame(centralwidget);
        Geldscheine->setObjectName(QStringLiteral("Geldscheine"));
        Geldscheine->setGeometry(QRect(640, 280, 211, 371));
        Geldscheine->setFrameShape(QFrame::StyledPanel);
        Geldscheine->setFrameShadow(QFrame::Raised);
        funfeuroschein = new QPushButton(Geldscheine);
        funfeuroschein->setObjectName(QStringLiteral("funfeuroschein"));
        funfeuroschein->setGeometry(QRect(0, 0, 211, 91));
        QFont font1;
        font1.setPointSize(14);
        funfeuroschein->setFont(font1);
        funfeuroschein->setCursor(QCursor(Qt::OpenHandCursor));
        funfeuroschein->setStyleSheet(QStringLiteral("border-image:url(:funf.jpg);"));
        zehneuroschein = new QPushButton(Geldscheine);
        zehneuroschein->setObjectName(QStringLiteral("zehneuroschein"));
        zehneuroschein->setGeometry(QRect(0, 90, 211, 91));
        zehneuroschein->setCursor(QCursor(Qt::OpenHandCursor));
        zehneuroschein->setStyleSheet(QStringLiteral("border-image:url(:zehn.jpg);"));
        zwanzigeuroschein = new QPushButton(Geldscheine);
        zwanzigeuroschein->setObjectName(QStringLiteral("zwanzigeuroschein"));
        zwanzigeuroschein->setGeometry(QRect(0, 180, 211, 101));
        zwanzigeuroschein->setCursor(QCursor(Qt::OpenHandCursor));
        zwanzigeuroschein->setStyleSheet(QStringLiteral("border-image:url(:zwanzig.jpg);"));
        funfzigeuroschein = new QPushButton(Geldscheine);
        funfzigeuroschein->setObjectName(QStringLiteral("funfzigeuroschein"));
        funfzigeuroschein->setGeometry(QRect(0, 280, 211, 91));
        funfzigeuroschein->setCursor(QCursor(Qt::OpenHandCursor));
        funfzigeuroschein->setStyleSheet(QStringLiteral("border-image:url(:funfzig.jpg);"));
        Geldfach_B = new QPushButton(centralwidget);
        Geldfach_B->setObjectName(QStringLiteral("Geldfach_B"));
        Geldfach_B->setGeometry(QRect(10, 410, 191, 111));
        Geldfach_B->setCursor(QCursor(Qt::OpenHandCursor));
        Geldfach_B->setStyleSheet(QLatin1String("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color:darkGray\n"
""));
        Menu = new QFrame(centralwidget);
        Menu->setObjectName(QStringLiteral("Menu"));
        Menu->setGeometry(QRect(50, 50, 481, 331));
        Menu->setFrameShape(QFrame::StyledPanel);
        Menu->setFrameShadow(QFrame::Raised);
        Einzahlen_B = new QPushButton(Menu);
        Einzahlen_B->setObjectName(QStringLiteral("Einzahlen_B"));
        Einzahlen_B->setGeometry(QRect(30, 20, 171, 71));
        Einzahlen_B->setStyleSheet(QStringLiteral("background-color:lightGray"));
        Auszahlen_B = new QPushButton(Menu);
        Auszahlen_B->setObjectName(QStringLiteral("Auszahlen_B"));
        Auszahlen_B->setGeometry(QRect(280, 20, 171, 71));
        Auszahlen_B->setStyleSheet(QStringLiteral("background-color:lightGray"));
        Kontostand_B = new QPushButton(Menu);
        Kontostand_B->setObjectName(QStringLiteral("Kontostand_B"));
        Kontostand_B->setGeometry(QRect(280, 120, 171, 71));
        Kontostand_B->setStyleSheet(QStringLiteral("background-color:lightGray"));
        PIN_AE_B = new QPushButton(Menu);
        PIN_AE_B->setObjectName(QStringLiteral("PIN_AE_B"));
        PIN_AE_B->setGeometry(QRect(30, 120, 171, 71));
        PIN_AE_B->setStyleSheet(QStringLiteral("background-color:lightGray"));
        Menu_Auszahlen = new QFrame(Menu);
        Menu_Auszahlen->setObjectName(QStringLiteral("Menu_Auszahlen"));
        Menu_Auszahlen->setGeometry(QRect(-10, 0, 491, 331));
        Menu_Auszahlen->setFrameShape(QFrame::StyledPanel);
        Menu_Auszahlen->setFrameShadow(QFrame::Raised);
        AB_5 = new QPushButton(Menu_Auszahlen);
        AB_5->setObjectName(QStringLiteral("AB_5"));
        AB_5->setGeometry(QRect(20, 10, 211, 71));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        AB_5->setFont(font2);
        AB_5->setStyleSheet(QStringLiteral("background-color:red"));
        AB_10 = new QPushButton(Menu_Auszahlen);
        AB_10->setObjectName(QStringLiteral("AB_10"));
        AB_10->setGeometry(QRect(20, 90, 211, 71));
        AB_10->setFont(font2);
        AB_10->setStyleSheet(QStringLiteral("background-color:blue"));
        AB_50 = new QPushButton(Menu_Auszahlen);
        AB_50->setObjectName(QStringLiteral("AB_50"));
        AB_50->setGeometry(QRect(20, 170, 211, 71));
        AB_50->setFont(font2);
        AB_50->setStyleSheet(QStringLiteral("background-color:yellow"));
        AB_100 = new QPushButton(Menu_Auszahlen);
        AB_100->setObjectName(QStringLiteral("AB_100"));
        AB_100->setGeometry(QRect(20, 250, 211, 71));
        AB_100->setFont(font2);
        AB_100->setStyleSheet(QStringLiteral("background-color:darkGreen"));
        AB_200 = new QPushButton(Menu_Auszahlen);
        AB_200->setObjectName(QStringLiteral("AB_200"));
        AB_200->setGeometry(QRect(270, 10, 211, 71));
        AB_200->setFont(font2);
        AB_200->setStyleSheet(QStringLiteral("background-color:green"));
        AB_Anderer_Betrag = new QPushButton(Menu_Auszahlen);
        AB_Anderer_Betrag->setObjectName(QStringLiteral("AB_Anderer_Betrag"));
        AB_Anderer_Betrag->setGeometry(QRect(270, 90, 211, 71));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        AB_Anderer_Betrag->setFont(font3);
        AB_Anderer_Betrag->setStyleSheet(QStringLiteral("background-color:lightGray"));
        Einzahlungsbetrag_Label = new QLabel(centralwidget);
        Einzahlungsbetrag_Label->setObjectName(QStringLiteral("Einzahlungsbetrag_Label"));
        Einzahlungsbetrag_Label->setGeometry(QRect(140, 530, 61, 21));
        Einzahlungsbetrag_Label->setStyleSheet(QLatin1String("border-width: 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
""));
        Aktionstasten = new QFrame(centralwidget);
        Aktionstasten->setObjectName(QStringLiteral("Aktionstasten"));
        Aktionstasten->setGeometry(QRect(480, 410, 121, 271));
        Aktionstasten->setStyleSheet(QStringLiteral("background-color:lightGray"));
        Aktionstasten->setFrameShape(QFrame::StyledPanel);
        Aktionstasten->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(Aktionstasten);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_Hilfe = new QPushButton(Aktionstasten);
        pushButton_Hilfe->setObjectName(QStringLiteral("pushButton_Hilfe"));
        sizePolicy.setHeightForWidth(pushButton_Hilfe->sizePolicy().hasHeightForWidth());
        pushButton_Hilfe->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        pushButton_Hilfe->setFont(font4);
        pushButton_Hilfe->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Hilfe->setStyleSheet(QLatin1String("color:white;\n"
"background-color:silver;"));

        verticalLayout_2->addWidget(pushButton_Hilfe);

        pushButton_Korrektur = new QPushButton(Aktionstasten);
        pushButton_Korrektur->setObjectName(QStringLiteral("pushButton_Korrektur"));
        sizePolicy.setHeightForWidth(pushButton_Korrektur->sizePolicy().hasHeightForWidth());
        pushButton_Korrektur->setSizePolicy(sizePolicy);
        pushButton_Korrektur->setFont(font4);
        pushButton_Korrektur->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Korrektur->setStyleSheet(QLatin1String("color:orange;\n"
"background-color:silver;"));

        verticalLayout_2->addWidget(pushButton_Korrektur);

        pushButton_Abbrechen = new QPushButton(Aktionstasten);
        pushButton_Abbrechen->setObjectName(QStringLiteral("pushButton_Abbrechen"));
        sizePolicy.setHeightForWidth(pushButton_Abbrechen->sizePolicy().hasHeightForWidth());
        pushButton_Abbrechen->setSizePolicy(sizePolicy);
        pushButton_Abbrechen->setFont(font4);
        pushButton_Abbrechen->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Abbrechen->setStyleSheet(QLatin1String("color:red;\n"
"background-color:silver;"));

        verticalLayout_2->addWidget(pushButton_Abbrechen);

        pushButton_Bestaetigen = new QPushButton(Aktionstasten);
        pushButton_Bestaetigen->setObjectName(QStringLiteral("pushButton_Bestaetigen"));
        sizePolicy.setHeightForWidth(pushButton_Bestaetigen->sizePolicy().hasHeightForWidth());
        pushButton_Bestaetigen->setSizePolicy(sizePolicy);
        pushButton_Bestaetigen->setFont(font4);
        pushButton_Bestaetigen->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Bestaetigen->setStyleSheet(QLatin1String("color: green;\n"
"background-color:silver;"));
        pushButton_Bestaetigen->setIconSize(QSize(16, 16));
        pushButton_Bestaetigen->setAutoRepeat(false);
        pushButton_Bestaetigen->setAutoRepeatDelay(300);

        verticalLayout_2->addWidget(pushButton_Bestaetigen);

        auswahl = new QLabel(centralwidget);
        auswahl->setObjectName(QStringLiteral("auswahl"));
        auswahl->setGeometry(QRect(660, 10, 151, 21));
        Menu_Pin = new QLabel(centralwidget);
        Menu_Pin->setObjectName(QStringLiteral("Menu_Pin"));
        Menu_Pin->setGeometry(QRect(50, 55, 481, 321));
        Menu_Pin->setFont(font2);
        Menu_Pin->setToolTipDuration(1);
        Menu_Kontostand = new QLabel(centralwidget);
        Menu_Kontostand->setObjectName(QStringLiteral("Menu_Kontostand"));
        Menu_Kontostand->setGeometry(QRect(50, 50, 481, 321));
        Menu_Kontostand->setFont(font2);
        Menu_Kontostand->setToolTipDuration(1);
        Menu_Kontostand->setLineWidth(-1);
        Menu_Kontostand->setTextFormat(Qt::AutoText);
        Menu_Kontostand->setAlignment(Qt::AlignCenter);
        Pin_Anforderung = new QFrame(centralwidget);
        Pin_Anforderung->setObjectName(QStringLiteral("Pin_Anforderung"));
        Pin_Anforderung->setGeometry(QRect(50, 50, 481, 331));
        Pin_Anforderung->setFrameShape(QFrame::StyledPanel);
        Pin_Anforderung->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(Pin_Anforderung);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 30, 261, 31));
        textEdit->setStyleSheet(QStringLiteral("background-color:lightGrey"));
        PIN_Label = new QLabel(Pin_Anforderung);
        PIN_Label->setObjectName(QStringLiteral("PIN_Label"));
        PIN_Label->setGeometry(QRect(160, 150, 161, 20));
        PIN_Label->setStyleSheet(QStringLiteral("background-color:lightGrey"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 600, 113, 32));
        GUI->setCentralWidget(centralwidget);

        retranslateUi(GUI);

        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QMainWindow *GUI)
    {
        GUI->setWindowTitle(QApplication::translate("GUI", "MainWindow", nullptr));
        pushButton_11->setText(QApplication::translate("GUI", "*", nullptr));
        pushButton_0->setText(QApplication::translate("GUI", "0", nullptr));
        pushButton_13->setText(QApplication::translate("GUI", "#", nullptr));
        pushButton_9->setText(QApplication::translate("GUI", "9", nullptr));
        pushButton_8->setText(QApplication::translate("GUI", "8", nullptr));
        pushButton_7->setText(QApplication::translate("GUI", "7", nullptr));
        pushButton_4->setText(QApplication::translate("GUI", "4", nullptr));
        pushButton_6->setText(QApplication::translate("GUI", "6", nullptr));
        pushButton_5->setText(QApplication::translate("GUI", "5", nullptr));
        pushButton_2->setText(QApplication::translate("GUI", "2", nullptr));
        pushButton_1->setText(QApplication::translate("GUI", "1", nullptr));
        pushButton_3->setText(QApplication::translate("GUI", "3", nullptr));
        Ausgabe->setText(QString());
        Kartenschlitz->setText(QApplication::translate("GUI", "_____________________________________", nullptr));
        Karte_4->setText(QString());
        Karte_1->setText(QString());
        Karte_2->setText(QString());
        Karte_3->setText(QString());
        funfeuroschein->setText(QString());
        zehneuroschein->setText(QString());
        zwanzigeuroschein->setText(QString());
        funfzigeuroschein->setText(QString());
        Geldfach_B->setText(QApplication::translate("GUI", "Geldfach", nullptr));
        Einzahlen_B->setText(QApplication::translate("GUI", "Einzahlen", nullptr));
        Auszahlen_B->setText(QApplication::translate("GUI", "Auszahlen", nullptr));
        Kontostand_B->setText(QApplication::translate("GUI", "Kontostand", nullptr));
        PIN_AE_B->setText(QApplication::translate("GUI", "PIN - \303\204ndern", nullptr));
        AB_5->setText(QApplication::translate("GUI", "5", nullptr));
        AB_10->setText(QApplication::translate("GUI", "10", nullptr));
        AB_50->setText(QApplication::translate("GUI", "50", nullptr));
        AB_100->setText(QApplication::translate("GUI", "100", nullptr));
        AB_200->setText(QApplication::translate("GUI", "200", nullptr));
        AB_Anderer_Betrag->setText(QApplication::translate("GUI", "Anderer Betrag", nullptr));
        Einzahlungsbetrag_Label->setText(QString());
        pushButton_Hilfe->setText(QApplication::translate("GUI", "Hilfe", nullptr));
        pushButton_Korrektur->setText(QApplication::translate("GUI", "Korrektur", nullptr));
        pushButton_Abbrechen->setText(QApplication::translate("GUI", "Abbrechen", nullptr));
        pushButton_Bestaetigen->setText(QApplication::translate("GUI", "Best\303\244tigen", nullptr));
        auswahl->setText(QString());
        Menu_Pin->setText(QApplication::translate("GUI", "PIN", nullptr));
        Menu_Kontostand->setText(QApplication::translate("GUI", "Kontostand:", nullptr));
        textEdit->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Bitte geben Sie Ihre vier stellige PIN ein:</p></body></html>", nullptr));
        PIN_Label->setText(QString());
        pushButton->setText(QApplication::translate("GUI", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
