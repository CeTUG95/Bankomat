#include "id_kartenleser.h"
//#include "kontodaten.h"

id_kartenleser::id_kartenleser(bankautomat *atm):atm(atm){
    this->karte = NULL;
}

void id_kartenleser::karte_einbehalten(){

}
void id_kartenleser::karte_einziehen(){

}
void id_kartenleser::karte_auswerfen(){
    this->Karte_in = false;
    this->karte = NULL;
}
void id_kartenleser::kunden_id_lesen(Karte* karte){
    if(Karte_in == true){
        this->karte = karte->getKundenDaten()->getID();
    }
}

void id_kartenleser::einschieben(Karte* karte){
    if(karte!=NULL){
        this->Karte_in = true;
        kunden_id_lesen(karte);
        this->atm->getAnzeige()->gui_start();
        this->atm->getSession()->sitzung_starten();
    }
}

Karte* id_kartenleser::getInfo(){
    return this->karte;
}
