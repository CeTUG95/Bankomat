#include "erster_schritt.h"
#include "ui_erster_schritt.h"
#include "id_kartenleser.h"

erster_schritt::erster_schritt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::erster_schritt){
        ui->setupUi(this);

        this->Karten=0;
        this->Karte=0;
        this->Einzahlungsbetrag=0;
        this->nummer="";
        this->Bank = new bankzentrale();
        this->atm = new bankautomat(Bank);

        ui->frame_4->setVisible(false);
        ui->frame_Auszahlung->setVisible(false);
        ui->Ausgabe_Einzahlungsbetrag->setVisible(false);
        // ui->frame->setEnabled(false);

}

erster_schritt::erster_schritt(bankautomat *atm):QMainWindow(0),atm(atm),ui(new Ui::erster_schritt){
    ui->setupUi(this);
    /*
     *
     *  setup Methoden
     *
     */
}



erster_schritt::~erster_schritt(){
    delete ui;
}
void erster_schritt::on_Karte_1_clicked(){
    ui->ausgabe->setText("Karte 1 ausgewählt");
    this->Karten=1;
}
void erster_schritt::on_Karte_2_clicked()
{
    ui->ausgabe->setText("Karte 2 ausgewählt");
    this->Karten=2;
}
void erster_schritt::on_Karte_3_clicked(){
    ui->ausgabe->setText("Karte 3 ausgewählt");
    this->Karten=3;
}
void erster_schritt::on_Kartenleser_clicked(){
    if(Karten){
        Karte=Karten;
        ui->frame->setVisible(true);
        ui->frame_2->setVisible(false);

        /*
        ui->Karte_1->setVisible(false);
        ui->Karte_2->setVisible(false);
        ui->Karte_3->setVisible(false);
        ui->ausgabe_erster_schritt->setVisible(false);
        ui->Kartenleser->setVisible(false);
        */
    }
}
void erster_schritt::on_pushButton_0_clicked(){
    nummer+="0";
    ui->ausgabe->setText(nummer);
}
void erster_schritt::on_pushButton_1_clicked(){
    nummer+="1";
    ui->ausgabe->setText(nummer);
}
void erster_schritt::on_pushButton_2_clicked(){
    nummer+="2";
    ui->ausgabe->setText(nummer);
}
void erster_schritt::on_pushButton_3_clicked(){
    nummer+="3";
    ui->ausgabe->setText(nummer);
}
void erster_schritt::on_pushButton_4_clicked(){
    nummer+="4";
    ui->ausgabe->setText(nummer);
}
void erster_schritt::on_pushButton_5_clicked(){
    nummer+="5";
    ui->ausgabe->setText(nummer);
}
void erster_schritt::on_pushButton_6_clicked(){
    nummer+="6";
    ui->ausgabe->setText(nummer);
}
void erster_schritt::on_pushButton_7_clicked(){
    nummer+="7";
    ui->ausgabe->setText(nummer);
}
void erster_schritt::on_pushButton_8_clicked(){
    nummer+="8";
    ui->ausgabe->setText(nummer);
}
void erster_schritt::on_pushButton_9_clicked(){
    nummer+="9";
    ui->ausgabe->setText(nummer);
}
//Hilfe Taste
void erster_schritt::on_pushButton_hilfe_clicked(){
    ui->ausgabe->setText("Haben Sie ein wenig Geduld,"
                         "\ndas Personal wurde bereits verständigt."
                         "\nMit freundlichen Grüßen"
                         "\nDie Gofth :)");
}
//Korrektur Taste
void erster_schritt::on_pushButton_Korrektur_clicked(){
    nummer = "";
    ui->ausgabe->setText(nummer);
}
//Bestätigung Taste
void erster_schritt::on_pushButton_Bestaetigung_clicked(){
    //Diese Logik muss verschwinden GÖCEEEN!!!!
    string pin=nummer.toStdString();
    if(Karte){
        if(atm->getZentrale()->geheimzahl_pruefung(pin,atm->idk->getInfo())){
            ui->ausgabe->setText("!!");
        }else{
            ui->ausgabe->setText("falsch");
        }
    }else{
        ui->ausgabe->setText("Karte nicht lesbar!");
    }
    nummer="";
//Das gehört zur GUI
     ui->pushButton_10->setStyleSheet("background-color:rgb(35, 168, 255)");
     ui->frame_4->setVisible(false);
     ui->Ausgabe_Einzahlungsbetrag->setVisible(false);
     ui->ausgabe->setText( QString( "Ihr Einzahlungsbetrag: %1 €" ).arg( Einzahlungsbetrag ) );
}
//Abbruch Taste
void erster_schritt::on_pushButton_Abbruch_clicked(){
    ui->frame_2->setVisible(true);
    ui->frame_4->setVisible(false);
    ui->Ausgabe_Einzahlungsbetrag->setVisible(false);
    ui->frame_Auszahlung->setVisible(false);
    ui->ausgabe->setText("");
    ui->Ausgabe_Einzahlungsbetrag->setNum(0);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_10->setStyleSheet("background-color:rgb(35, 168, 255)");
}
//Für die Aktion Einzahlung
void erster_schritt::on_pushButton_Einzahlung_clicked(){
    ui->Ausgabe_Einzahlungsbetrag->setVisible(true);
    ui->frame_4->setVisible(true);
    ui->ausgabe->setText("Bitte legen Sie Ihre Geldscheine ins Geldfach.");
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_10->setStyleSheet("background-color: green");
}
//Für die Aktion Auszahlung
void erster_schritt::on_pushButton_Auszahlung_clicked(){
    ui->frame_Auszahlung->setVisible(true);
    ui->ausgabe->setText("");
}
//Für die Aktion Kontostand anzeigen
void erster_schritt::on_pushButton_Kontostand_clicked(){
    //getAtm()->getZentrale()->getKontodatenList()[Karten]->getKontostand();
   // ui->ausgabe->setText( QString( "Ihr Kontoguthaben: %1" ).arg( getAtm()->getZentrale()->getKontodatenList()[Karten]->getKontostand(); ) );

   
}
//Für die Aktion PIN-Ändern
void erster_schritt::on_pushButton_PIN_aendern_clicked(){

}
// Ab hier kommen die Geldscheine
int erster_schritt::on_fuenf_clicked(){
    Einzahlungsbetrag += 5;
    ui->Ausgabe_Einzahlungsbetrag->setNum(Einzahlungsbetrag);
    return Einzahlungsbetrag;
}

int erster_schritt::on_zehner_clicked(){
    Einzahlungsbetrag += 10;
    ui->Ausgabe_Einzahlungsbetrag->setNum(Einzahlungsbetrag);
    return Einzahlungsbetrag;
}

int erster_schritt::on_zwanny_clicked(){
    Einzahlungsbetrag += 20;
    ui->Ausgabe_Einzahlungsbetrag->setNum(Einzahlungsbetrag);
    return Einzahlungsbetrag;
}

int erster_schritt::on_fuffy_clicked(){
    Einzahlungsbetrag += 50;
    ui->Ausgabe_Einzahlungsbetrag->setNum(Einzahlungsbetrag);
    return Einzahlungsbetrag;
}

void erster_schritt::setup_gui(){
/*
    QObject::connect(
                this->ui->pushButton_Kontostand,    // name in der gui
                SIGNAL(clicked()),                  // ist fast überall gleich
                this->atm->session,                 // das objekt das angesprochen werden soll
                SLOT(kontostand_abfragen(int))      // die funktion die aufgerufen wird
                );
*/
}
