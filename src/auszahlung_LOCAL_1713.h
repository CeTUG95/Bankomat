#ifndef AUSZAHLUNG_H
#define AUSZAHLUNG_H

#include "sitzung.h"


class auszahlung : public sitzung{
    Q_OBJECT
private:
    // private attribut da nur die klasse selber drauf zugreufen sollte
    double betrag;
public:
    // wir übergeben einfach betrago und weisen das später auf betrag zu
    void auszahlen(double betago);
    // die pin eingabe als string!
    string pin_eingabe();
    void vorgang_starten();
    // wir übergeben der auszahlung ein objekt von bankautomat namens atm
    auszahlung(bankautomat* atm);
    // getter und setter
    int getBetrag();
    void setBetrag(int betrago);
public slots:
    // signals und slots immernoch!
    void betragBestaetigen(int betrag);
};

#endif // AUSZAHLUNG_H
