#include "geldkassette.h"

geldkassette::geldkassette(){


}

void geldkassette::entnehme_geldschein(){


}

int geldkassette::getAnzahl(){
    return this->anzahl;
}

char geldkassette::getGeldschein_Format(){
    return this->geldschein_Format;
}

void geldkassette::setAnzahl(int anzahl_){
    this->anzahl = anzahl_;
}
void geldkassette::setGeldschein_Format(char Format){
    this->geldschein_Format = Format;
}
