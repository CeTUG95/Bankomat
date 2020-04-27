#include "gui.h"
#include "ui_gui.h"
#include "id_kartenleser.h"
#include "karte.h"

GUI::GUI(QWidget *parent) :
    QMainWindow(parent),
    //Startzustand
    ui(new Ui::GUI){
    ui->setupUi(this);
}
GUI::GUI(bankautomat* atm) :
    QMainWindow(0),
    atm(atm),
    ui(new Ui::GUI){
    ui->setupUi(this);
    this->setup_connect();
    this->Karten=0;
    this->MKart=0;
    this->modus=0;
    this->betrag=0;
    this->count=0;
    this->nummer="";
    this->pin="";
    ui->label_text->setVisible(false);
    ui->Menu->setVisible(false);
    ui->hilfe->setVisible(false);
    ui->hilfe_1->setVisible(false);
    ui->hilfe_2->setVisible(false);
    ui->hilfe_3->setVisible(false);
    ui->hilfe_5->setVisible(false);
    ui->Auszahlungslabel_OK->setVisible(false);
    ui->Menu->setStyleSheet("background-color:rgb(241, 243, 201)");
    ui->Menu_Auszahlen->setVisible(false);
    ui->Menu_Auszahlen->setStyleSheet("background-color:rgb(241, 243, 201)");
    ui->Menu_Pin->setVisible(false);
    ui->Menu_Pin->setStyleSheet("background-color:rgb(241, 243, 201)");
    ui->Menu_Kontostand->setVisible(false);
    ui->Menu_Kontostand->setStyleSheet("background-color:rgb(241, 243, 201)");
    ui->Pin_Anforderung->setVisible(false);
    ui->Pin_Anforderung->setStyleSheet("background-color:rgb(241, 243, 201)");
    ui->Geldscheine->setVisible(false);
    ui->Einzahlungsbetrag_Label->setVisible(false);
    ui->Tastatur->setStyleSheet("background-color:lightGray");
    ui->Tastatur->setEnabled(false);
    ui->centralwidget->setStyleSheet("background-color:darkGray");
    ui->Kartenschlitz->setStyleSheet("background-color:darkCyan");
}
GUI::~GUI(){
    delete ui;
}
//Tasten Zahlenfeld................................................................................
void GUI::on_pushButton_0_clicked(){
    nummer+="0";
    count++;
    ui->Ausgabe->setText(nummer);
    if(count<5){
        pin+="0";
        ui->PIN_Label->setText(pin);
    }else
        ui->Tastatur->setEnabled(false);
}
void GUI::on_pushButton_1_clicked(){
    nummer+="1";
    count++;
    ui->Ausgabe->setText(nummer);
    if(count<5){
        pin+="1";
        ui->PIN_Label->setText(pin);
    }else
        ui->Tastatur->setEnabled(false);
}
void GUI::on_pushButton_2_clicked(){
    nummer+="2";
    count++;
    ui->Ausgabe->setText(nummer);
    if(count<5){
        pin+="2";
        ui->PIN_Label->setText(pin);
    }else
        ui->Tastatur->setEnabled(false);
}
void GUI::on_pushButton_3_clicked(){
    nummer+="3";
    count++;
    ui->Ausgabe->setText(nummer);
    if(count<5){
        pin+="3";
        ui->PIN_Label->setText(pin);
    }else
        ui->Tastatur->setEnabled(false);
}
void GUI::on_pushButton_4_clicked(){
    nummer+="4";
    count++;
    ui->Ausgabe->setText(nummer);

    if(count<5){
        pin+="4";
        ui->PIN_Label->setText(pin);
    }else
        ui->Tastatur->setEnabled(false);
}
void GUI::on_pushButton_5_clicked(){
    nummer+="5";
    count++;
    ui->Ausgabe->setText(nummer);
    if(count<5){
        pin+="5";
        ui->PIN_Label->setText(pin);
    }else
        ui->Tastatur->setEnabled(false);
}
void GUI::on_pushButton_6_clicked(){
    nummer+="6";
    count++;
    ui->Ausgabe->setText(nummer);

    if(count<5){
        pin+="6";
        ui->PIN_Label->setText(pin);
    }else
        ui->Tastatur->setEnabled(false);
}
void GUI::on_pushButton_7_clicked(){
    nummer+="7";
    count++;
    ui->Ausgabe->setText(nummer);
    if(count<5){
        pin+="7";
        ui->PIN_Label->setText(pin);
    }else
        ui->Tastatur->setEnabled(false);
}
void GUI::on_pushButton_8_clicked(){
    nummer+="8";
    count++;
    ui->Ausgabe->setText(nummer);
    if(count<5){
        pin+="8";
        ui->PIN_Label->setText(pin);
    }else
        ui->Tastatur->setEnabled(false);
}
void GUI::on_pushButton_9_clicked(){
    nummer+="9";
    count++;
    ui->Ausgabe->setText(nummer);
    if(count<5){
        pin+="9";
        ui->PIN_Label->setText(pin);
    }else{
        ui->Tastatur->setEnabled(false);
    }
}
//Karten...........................................................................................
void GUI::on_Karte_1_clicked(){
    ui->auswahl->setText("Karte 1 ausgewählt");
    Karten=1;
    modus=5;
    emit leseKarte(this->atm->getZentrale()->getKontodatenList()[0]->getID());
}
void GUI::on_Karte_2_clicked(){
    ui->auswahl->setText("Karte 2 ausgewählt");
    Karten=2;
    modus=5;
    emit leseKarte(this->atm->getZentrale()->getKontodatenList()[1]->getID());
}
void GUI::on_Karte_3_clicked(){
    ui->auswahl->setText("Karte 3 ausgewählt");
    Karten=3;
    modus=5;
    emit leseKarte(this->atm->getZentrale()->getKontodatenList()[2]->getID());
}
void GUI::on_Karte_4_clicked(){
    ui->auswahl->setText("Mensacard ausgewählt");
    MKart=1;
}
//Geldscheine......................................................................................
void GUI::on_funfeuroschein_clicked(){
    betrag += 5;
    ui->Einzahlungsbetrag_Label->setNum(betrag);
}
void GUI::on_zehneuroschein_clicked(){
    betrag += 10;
    ui->Einzahlungsbetrag_Label->setNum(betrag);
}
void GUI::on_zwanzigeuroschein_clicked(){
    betrag += 20;
    ui->Einzahlungsbetrag_Label->setNum(betrag);
}
void GUI::on_funfzigeuroschein_clicked(){
    betrag += 50;
    ui->Einzahlungsbetrag_Label->setNum(betrag);
}
//Aktion Einzahlung................................................................................
void GUI::on_Einzahlen_B_clicked(){
    ui->Einzahlungsbetrag_Label->setVisible(true);
    ui->Geldscheine->setVisible(true);
    ui->label_text->setVisible(true);
    ui->label_text->setText("Bitte legen Sie Ihre Geldscheine ins Geldfach<br/>"
                            "und drücken Sie auf Bestätigen.");
    ui->Geldfach_B->setEnabled(true);
    ui->Kartenschlitz->setEnabled(false);
    ui->Geldfach_B->setStyleSheet("background-color: green");
    ui->Menu->setVisible(false);
    modus=1;
    MKart=0;
    emit auswahl_operation(1);
}
//Aktion Auszahlung................................................................................
void GUI::on_Auszahlen_B_clicked(){
    ui->Menu_Auszahlen->setVisible(true);
    modus=2;
    MKart=0;
    emit auswahl_operation(2);
}
void GUI::on_AB_5_clicked(){
    ui->Pin_Anforderung->setVisible(true);
    ui->Tastatur->setEnabled(true);
    betrag=5;
}
void GUI::on_AB_10_clicked(){
    ui->Pin_Anforderung->setVisible(true);
    ui->Tastatur->setEnabled(true);
    betrag=10;
}
void GUI::on_AB_50_clicked(){
    ui->Pin_Anforderung->setVisible(true);
    ui->Tastatur->setEnabled(true);
    betrag=50;
}
void GUI::on_AB_100_clicked(){
    ui->Pin_Anforderung->setVisible(true);
    ui->Tastatur->setEnabled(true);
    betrag=100;
}
void GUI::on_AB_200_clicked(){
    ui->Pin_Anforderung->setVisible(true);
    ui->Tastatur->setEnabled(true);
    betrag=200;
}
//Aktion Pin ändern................................................................................
void GUI::on_PIN_AE_B_clicked(){
    ui->Pin_Anforderung->setVisible(true);
    ui->Tastatur->setEnabled(true);
    modus=6;
    emit auswahl_operation(3);
}
//Aktion Kontostand................................................................................
void GUI::on_Kontostand_B_clicked(){
    ui->Menu_Kontostand->setVisible(true);
    MKart=0;
    Karten=0;
    emit auswahl_operation(4);
    QObject::connect(this,
            SIGNAL(kontostand()),
            this->atm->getSession(),
            SLOT(kontostand_abfragen())
            );
    ui->Menu_Kontostand->setText( QString( "Ihr Kontostand: %1 €.<br/><br/>"
                                           "Bitte entnehmen Sie Ihre Karte." ).arg(emit kontostand()));
    QObject::disconnect(this,
            SIGNAL(kontostand()),
            this->atm->getSession(),
            SLOT(kontostand_abfragen())
            );
}
//Tasten, Aktion...................................................................................
void GUI::on_pushButton_Bestaetigen_clicked(){

    //Modusauswahl(Einzahlen,Auszahlen,...)
    switch(this->modus){
    case 1: //Das gehört zur GUI für die Einzahlung
        QObject::connect(this,
                SIGNAL(einzahlen(int)),
                this->atm->getSession(),
                SLOT(betragBestaetigen(int))
                );
        ui->Geldscheine->setVisible(false);
        ui->Einzahlungsbetrag_Label->setVisible(false);
        ui->Geldfach_B->setStyleSheet("background-color:darkGray");
        ui->label_text->setText( QString( "Ihr Einzahlungsbetrag: %1 €.<br/>"
                                          "Bitte entnehmen Sie Ihre Karte." ).arg( betrag ) );
        ui->Kartenschlitz->setEnabled(true);
        emit einzahlen(betrag);
        betrag=0;
        this->Karten=0;
        QObject::disconnect(this,
            SIGNAL(einzahlen(int)),
            this->atm->getSession(),
            SLOT(betragBestaetigen(int))
            );
        break;
    case 2: //Das gehört zur GUI für die Auszahlung

     /*   QObject::connect(this->atm->getSession(),
                SIGNAL(pin_eingabe()),
                this,
                SLOT(pin_eingabe())
                );
       */ QObject::connect(this,
                SIGNAL(auszahlen(int,string)),
                this->atm->getSession(),
                SLOT(auszahlen(int,string))
                );

        emit auszahlen(betrag,pin.toUtf8().constData());
        //nummer.toUtf8().constData(); //angeblich String
        ui->Auszahlungslabel_OK->setVisible(true);
        ui->Auszahlungslabel_OK->setText( QString( "Ihr Auszahlungsbetrag: %1 €.<br/><br/>"
                                               "Bitte entnehmen Sie Ihr Geld.Vergessen Sie Ihre Karte nicht!" ).arg(betrag));
        //ui->Auszahlungslabel_OK->setText(QString("Falsche Pin!!!"));
        ui->Geldfach_B->setEnabled(true);
        ui->Kartenschlitz->setEnabled(false);
        ui->Geldfach_B->setStyleSheet("background-color: green");
        Karten=0;
        QObject::disconnect(this,
                SIGNAL(auszahlen(int,string)),
                this->atm->getSession(),
                SLOT(auszahlen(int,string))
                );
       /* QObject::disconnect(this->atm->getSession(),
                SIGNAL(pin_eingabe()),
                this,
                SLOT(pin_eingabe())
                );
        */break;
    case 3:
        QObject::connect(this,
                        SIGNAL(pin_weiterleitung(string,string)),
                        this->atm->getSession(),
                        SLOT(pin_aendern(string,string))
                        );
        QObject::connect(this->atm->getSession(),
                        SIGNAL(neupin()),
                        this,
                        SLOT(pin_eingabe())
                        );
        if(pin.size()==4)
            emit pin_weiterleitung(altpin.toUtf8().constData(),pin.toUtf8().constData());

        QObject::disconnect(this,
                        SIGNAL(pin_weiterleitung(string,string)),
                        this->atm->getSession(),
                        SLOT(pin_aendern(string,string))
                        );
        QObject::disconnect(this->atm->getSession(),
                        SIGNAL(neupin()),
                        this,
                        SLOT(pin_eingabe())
                        );
        break;
    case 4:
        break;
    case 6:
        if(pin.size()==4){
            altpin=pin;
            pin="";
            modus=3;
            count=0;
            ui->PIN_Label->setText("");
        }
        break;
    default:
        break;
    }
    //Verbindung mit der Logik
}
void GUI::on_pushButton_Abbrechen_clicked(){
    ui->label_text->setVisible(false);
    ui->Tastatur->setEnabled(false);
    ui->hilfe->setVisible(false);
    ui->hilfe_1->setVisible(false);
    ui->hilfe_2->setVisible(false);
    ui->hilfe_3->setVisible(false);
    ui->hilfe_5->setVisible(false);
    ui->Karten->setVisible(true);
    ui->Geldscheine->setVisible(false);
    ui->Auszahlungslabel_OK->setVisible(false);
    ui->Einzahlungsbetrag_Label->setVisible(false);
    ui->Menu->setVisible(false);
    ui->Menu_Auszahlen->setVisible(false);
    ui->Menu_Pin->setVisible(false);
    ui->Menu_Kontostand->setVisible(false);
    ui->Pin_Anforderung->setVisible(false);
    ui->Geldfach_B->setStyleSheet("background-color:darkGray");
    ui->Ausgabe->setText(" ");
    ui->auswahl->setText(" ");
    ui->PIN_Label->setText(" ");
    ui->Einzahlungsbetrag_Label->setNum(0);
    nummer="";
    pin="";
    betrag=0;
    modus=0;
    MKart=0;
    Karten=0;
    count=0;
}
void GUI::on_pushButton_Korrektur_clicked(){
    ui->PIN_Label->setText("");
    count=0;
    nummer="";
    ui->Tastatur->setEnabled(true);
}
void GUI::on_pushButton_Hilfe_clicked(){
    switch(modus){
    case 0:ui->hilfe->setVisible(true);
    break;
    case 1:ui->hilfe_1->setVisible(true);
           ui->hilfe->setVisible(false);
           ui->hilfe_5->setVisible(false);
    break;
    case 2:ui->hilfe_2->setVisible(true);
           ui->hilfe->setVisible(false);
           ui->hilfe_5->setVisible(false);
    break;
    case 3:ui->hilfe_3->setVisible(true);
           ui->hilfe->setVisible(false);
           ui->hilfe_5->setVisible(false);
    break;
    case 5:ui->hilfe_5->setVisible(true);
           ui->hilfe->setVisible(false);
    break;
    }
}
//Setup für die Signale und Slots
void GUI::setup_connect(){
    QObject::connect(this,
            SIGNAL(leseKarte(class Karte*)),
            this->atm->getKatenleser(),
            SLOT(einschieben(class Karte*))
            );

    QObject::connect(this->atm->getAnzeige(),
            SIGNAL(menu_auswahl()),
            this,
            SLOT(on_Kartenschlitz_clicked())
            );

    QObject::connect(this,
            SIGNAL(auswahl_operation(int)),
            this->atm,
            SLOT(sitzung_starten(int))
            );
    QObject::connect(this,
            SIGNAL(abbrechen()),
            this,
            SLOT(on_pushButton_Abbrechen_clicked())
            );

/* QObject::connect(this,
            SIGNAL(leseKarte(class Karte*)),
            this->atm->getKatenleser(),
            SLOT(einschieben(class Karte*))
            );

    QObject::connect(this,
            SIGNAL(leseKarte(class Karte*)),
            this->atm->getKatenleser(),
            SLOT(einschieben(class Karte*))
            );
*/
}
//Kartenschlitz....................................................................................
void GUI::on_Kartenschlitz_clicked(){
    if(Karten){
        ui->Karten->setVisible(false);
        ui->Menu->setVisible(true);
    }
    else if(MKart==1){
        ui->label_text->setVisible(true);
        ui->label_text->setText("Ungültige Karte.<br/>Bitte entnehmen Sie Ihre Karte.");
        ui->Karten->setVisible(false);
        MKart=0;
    }
    else{
        emit abbrechen();
    }
}

std::string GUI::pin_eingabe(){


    return pin.toUtf8().constData();
}

void GUI::on_Geldfach_B_clicked(){
    ui->Geldfach_B->setStyleSheet("background-color:darkGray");
    ui->Kartenschlitz->setEnabled(true);
    MKart=0;
}
