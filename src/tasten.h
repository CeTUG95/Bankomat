#ifndef TASTEN_H
#define TASTEN_H

#include "bankautomat.h"

class tasten{
public:
    class bankautomat &atm;
    void abbrechen();
    void letztes_zeichen_loeschen();
    void bestaetigen();
    void hinweise_aufrufen();
    void beitrag_eingeben();
    void pin_eingabe();
    tasten(bankautomat atm);
};

#endif // TASTEN_H
