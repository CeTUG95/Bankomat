#include "geldfach.h"

geldfach::geldfach(bankautomat* atm): atm(atm){

}

void geldfach::fach_oeffnen(){
    cout << "Das Geldfach ist offen";
    this->fach_schliessen();
}

void geldfach::fach_schliessen(){
    cout << "Das Geldfach ist geschlossen";
}

void geldfach::geld_auswerfen(){
    cout << "Im Geldfach befinden sich " << this->getMoney() << " Euro." << endl;
    this->fach_oeffnen();
    cout << "Im Geldfach befinden sich kein Geld mehr." << endl;

}

void geldfach::geld_zaehlen(float betrag){
    this->setMoney(betrag);
    this->geld_auswerfen();
}

float geldfach::getMoney(){
    return this->geld;
}

void geldfach::setMoney(float Money){
    this->geld = Money;
}
