#include "monitor.h"

monitor::monitor(bankautomat* atm): atm(atm){}

monitor::monitor(){
    this->atm =NULL;
}

void monitor::sitzung_aktuallisieren(){

}

void monitor::pin_fordern(){

}

void monitor::menu_anzeigen(){
}

void monitor::betrag_fordern(){

}

void monitor::gui_start(){
    emit menu_auswahl();
}
