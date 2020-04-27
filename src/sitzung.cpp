#include "sitzung.h"


sitzung::sitzung(bankautomat* atm):atm(atm){
    this->setDisplay(this->getAtm()->getAnzeige());
    this->setGeldfach(this->getAtm()->getGeldfach());
    this->setKartenleser(this->getAtm()->getKatenleser());
    this->setKarte(this->getKartenleser()->getInfo());
    this->setZentrale(this->getAtm()->getZentrale());
}

void sitzung::setDisplay(monitor* anzeige){
    this->display = anzeige;
}

monitor* sitzung::getDisplay(){
    return this->display;
}

void sitzung::setGeldfach(geldfach* fach){
    this->fach = fach;
}

geldfach* sitzung::getGeldfach(){
    return this->fach;
}

void sitzung::setKarte(Karte* karte){
    this->karte = karte;
}

Karte* sitzung::getKarte(){
    return this->karte;
}

void sitzung::setKartenleser(id_kartenleser* kartenleser){
    this->kartenleser = kartenleser;
}

id_kartenleser* sitzung::getKartenleser(){
    return this->kartenleser;
}

void sitzung::setZentrale(bankzentrale* zentrale){
    this->zentrale = zentrale;
}

bankzentrale* sitzung::getZentrale(){
    return this->zentrale;
}

void sitzung::sitzung_beenden(){
    delete this;
}

void sitzung::sitzung_starten(){
    //    this->getDisplay()->menu_anzeigen();

    //hier Das Erstefenster starten "Karteauswählern"

}

void sitzung::sitzung_wechseln(){
    // zurzeit kein sinn
}

bankautomat* sitzung::getAtm(){
    return this->atm;
}

//void sitzung::betragBestaetigen(int){}
