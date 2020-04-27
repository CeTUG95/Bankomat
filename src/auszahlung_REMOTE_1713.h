#ifndef AUSZAHLUNG_H
#define AUSZAHLUNG_H

#include "sitzung.h"


class auszahlung : public sitzung{
    Q_OBJECT
private:
    double betrag;
public:

    void vorgang_starten();
    auszahlung(bankautomat* atm);
    int getBetrag();
    void setBetrag(int betrago);
public slots:
    void betragBestaetigen(int betrag);
    void auszahlen(int betago, string pin);
signals:
    string pin_eingabe();

};

#endif // AUSZAHLUNG_H
