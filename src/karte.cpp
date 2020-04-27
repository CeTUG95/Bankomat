#include "karte.h"

Karte::Karte(kontodaten* kdata,int id): kdata(kdata), id(id){

}

Karte::Karte(){
    this->id=0;
    this->kdata=NULL;
}

int Karte::getID(){
    return this->id;
}

void Karte::setID(int ID){
    this->id = ID;
}

kontodaten* Karte::getKundenDaten(){
    return this->kdata;
}
