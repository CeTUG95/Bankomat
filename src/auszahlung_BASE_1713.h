#ifndef AUSZAHLUNG_H
#define AUSZAHLUNG_H

#include "sitzung.h"


class auszahlung : public sitzung{
    Q_OBJECT
private:
    double betrag;
public:
    void auszahlen(double betago);
    string pin_eingabe();
    void vorgang_starten();
    auszahlung(bankautomat* atm);
    int getBetrag();
    void setBetrag(int betrago);
public slots:
    void betragBestaetigen(int betrag);
};

#endif // AUSZAHLUNG_H
