#include "geldschein.h"

geldschein::geldschein(){

}

string geldschein::getFarbe(){
    return this->farbe;
}

string geldschein::getGeldschein_Format(){
    return this->geldschein_format;
}

int geldschein::getWert(){
    return this->wert;
}

void geldschein::setFarbe(string farbe_){
    this->farbe = farbe_;
}

void geldschein::setGeldschein_Format(string geldschein_format_){
    this->geldschein_format = geldschein_format_;
}

void geldschein::setWert(int wert_){
    this->wert = wert_;
}
