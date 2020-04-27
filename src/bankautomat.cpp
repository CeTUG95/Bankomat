#include "bankautomat.h"
#include "sitzung.h"
#include "einzahlung.h"
#include "auszahlung.h"
#include "pin_aenderung.h"
#include "kontostandabfrage.h"

bankautomat::bankautomat(bankzentrale* zentrale): zentrale(zentrale){
    this->ts = new tresor(this);
    this->fach = new geldfach(this);
    this->druck = new drucker(this);
    this->anzeige =new monitor(this);
    this->idk =new id_kartenleser(this);
    this->session = new sitzung(this);
}

void bankautomat::hochfahren(){
    this->anzeige->menu_anzeigen();
    this->session = new sitzung(this);
    this->session->sitzung_starten();

}
void bankautomat::herunterfahren(){

}

bankzentrale* bankautomat::getZentrale(){
    return this->zentrale;
}

monitor* bankautomat::getAnzeige(){
    return this->anzeige;
}

geldfach* bankautomat::getGeldfach(){
    return this->fach;
}

tresor* bankautomat::getTresor(){
    return this->ts;
}

id_kartenleser* bankautomat::getKatenleser(){
    return this->idk;
}

drucker* bankautomat::getDrucker(){
    return this->druck;
}

sitzung* bankautomat::getSession(){
    return this->session;
}

void bankautomat::sitzung_starten(int sitzungsArt){
    switch (sitzungsArt) {
    case 1:
        this->session = new einzahlung(this);
        break;
    case 2:
        this->session = new auszahlung(this);
        break;
    case 3:
        this->session = new pin_aenderung(this);
        break;
    case 4:
        this->session = new kontostandabfrage(this);
        break;
    default:
        break;
    }
}
