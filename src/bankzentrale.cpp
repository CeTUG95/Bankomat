#include "bankzentrale.h"
#include "kontodaten.h"

bankzentrale::bankzentrale(){
    this->kontodatenList.clear();
    new kontodaten(1, "Bas", "Fatih", 0.01, this,"0000");
    new kontodaten(2, "Cevik", "Tugay", 1000.0, this,"0000");
    new kontodaten(3, "Goecen", "Mehmet", 1050.0, this,"0000");
}

bool bankzentrale::geheimzahl_pruefung(string pin, Karte *i){
    if(pin==i->getKundenDaten()->getPin()){
        cout << "Pin: Korrekt!" << endl;
        return true;
    }
    cout << "Pin: nicht Korrekt!" << endl;
    return false;
}

bool bankzentrale::transaktionsbewilligung(double betrag, Karte *i){
    if(betrag <= i->getKundenDaten()->getKontostand()){
        cout << "Der auszuzahlende Betrag wurde bewilligt!" << endl;
        return true;
    }
    cout << "Wir konnten Ihr Konto nicht mit dem gewünschtem Betrag belasten!" << endl;
    return false;
}


void bankzentrale::addKunde(kontodaten* kunde){
    kontodatenList.push_back(kunde);
}

vector<class kontodaten*> bankzentrale::getKontodatenList(){
    return this->kontodatenList;
}
