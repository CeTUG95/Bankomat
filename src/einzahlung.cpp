#include "einzahlung.h"
#include "drucker.h"
#include <QDebug>

einzahlung::einzahlung(bankautomat* atm):sitzung(atm){
    this->betrag=0.0;
}

void einzahlung::einzahlen(double betrag){
    this->getKarte()->getKundenDaten()->setKontostand(this->getKarte()->getKundenDaten()->getKontostand()+betrag);
    qDebug().noquote()<< this->getKarte()->getKundenDaten()->getKontostand();
}

int einzahlung::getBetrag(){
    return this->betrag;
}

void einzahlung::setBetrag(double betrag){
    this->betrag = betrag;
}
int einzahlung::quittung_drucken(bool tf){
    this->truefalse = tf;
    if(this->truefalse == true){
        return 1;
    } else {
        return 2;
    }
}
void einzahlung::betragBestaetigen(int betrag){
    einzahlen(betrag);
}
