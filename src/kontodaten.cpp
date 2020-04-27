#include "kontodaten.h"
#include "bankzentrale.h"

kontodaten::kontodaten(int id, string nname, string vname, double kontostand , bankzentrale* bank,string pin): nachname(nname), vorname(vname), kontostand(kontostand), zentrale(bank), pin(pin){
    this->kunden_id = new Karte(this,id);
    this->zentrale->addKunde(this);
}

double kontodaten::getKontostand(){
    return this->kontostand;
}

Karte* kontodaten::getID(){
    return this->kunden_id;
}

string kontodaten::getNname(){
    return this->nachname;
}
string kontodaten::getVname(){
    return this->vorname;
}

void kontodaten::setNname(string Nname){
    this->nachname = Nname;
}

void kontodaten::setVname(string Vname){
    this->vorname = Vname;
}

void kontodaten::setID(int K_ID){
    this->kunden_id->setID(K_ID);
}

void kontodaten::setKontostand(double kontostand_){
    this->kontostand = kontostand_;
}

string kontodaten::getPin(){
    return this->pin;
}

void kontodaten::setPin(string pin_){
    this->pin = pin_;
}

