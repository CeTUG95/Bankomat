#include "kontostandabfrage.h"

kontostandabfrage::kontostandabfrage(bankautomat* atm):sitzung(atm){}

double kontostandabfrage::kontostand_abfragen(){
    return this->getKarte()->getKundenDaten()->getKontostand();
}
