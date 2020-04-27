#ifndef EINZAHLUNG_H
#define EINZAHLUNG_H

#include "sitzung.h"
#include "drucker.h"

class einzahlung:public sitzung{
    Q_OBJECT
private:
    double betrag;
    bool truefalse;

public:
    int quittung_drucken(bool tf);
    void einzahlen(double betrag);
    einzahlung(bankautomat* atm);
    //    einzahlung(bankautomat* atm, monitor anzeige, tasten tastatur, id_kartenleser idk, geldfach gf,drucker druck);
    int getBetrag();
    void setBetrag(double betrag_);

public slots:
    void betragBestaetigen(int betrag);
};

#endif // EINZAHLUNG_H
