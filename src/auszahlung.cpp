#include "auszahlung.h"
#include "kontodaten.h"
#include "erster_schritt.h"

auszahlung::auszahlung(bankautomat* atm):sitzung(atm){
    this->betrag=0.0;
}


void auszahlung::auszahlen(int betrag, string pin){
    this->getDisplay()->betrag_fordern();

    if(this->getZentrale()->transaktionsbewilligung(betrag,this->getKarte())){

        if(this->getZentrale()->geheimzahl_pruefung(pin,this->getKarte())){
            this->getKarte()->getKundenDaten()->setKontostand(this->getKarte()->getKundenDaten()->getKontostand() - betrag);
            cout << "Das Geld wurde Ihnen virtuell Ausgezahlt!";
            this->getGeldfach()->geld_zaehlen(betrag);
            this->getKartenleser()->karte_auswerfen();
            // this->sitzung_beenden();
        }
    }
}
/*std::string auszahlung::pin_eingabe(){
    return "";
}*/
void auszahlung::vorgang_starten(){

}

int auszahlung::getBetrag(){
    return this->betrag;
}

void auszahlung::setBetrag(int betrago){
    this->betrag = betrago;
}

