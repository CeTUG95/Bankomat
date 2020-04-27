#include "pin_aenderung.h"
#include <iostream>

pin_aenderung::pin_aenderung(bankautomat* atm):sitzung(atm){}

void pin_aenderung::pin_aendern(string pin,string neupin){

    if(this->getKarte()->getKundenDaten()->getPin() == pin){
        std::cout << "PIN Korrekt"<<std::endl;
        //string neuepin = emit neupin();
        std::cout << "Neue PIN :"<< neupin << std::endl;

        this->getKarte()->getKundenDaten()->setPin(neupin);
        std::cout << "PIN wurde erfolgreich geändert"<<std::endl;
    }else{
        std::cout << "PIN falsch"<<std::endl;
    }
}
