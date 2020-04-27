#include "tresor.h"
#include "bankautomat.h"

tresor::tresor(bankautomat* atm): atm(atm){
    this->kassette.clear();
}

tresor::tresor(){
    this->atm=NULL;
    this->kassette.clear();
}

void tresor::oeffnen(){

}

void tresor::schliessen(){

}
