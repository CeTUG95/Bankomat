#ifndef AUSZAHLUNG_H
#define AUSZAHLUNG_H

#include "sitzung.h"


class auszahlung : public sitzung{
    Q_OBJECT
private:
    // private attribut da nur die klasse selber drauf zugreufen sollte
    double betrag;
public:
<<<<<<< HEAD
    // wir übergeben einfach betrago und weisen das später auf betrag zu
    void auszahlen(double betago);
    // die pin eingabe als string!
    string pin_eingabe();
=======

>>>>>>> bbb350071cb0291ff3327e4bd98f572b225fbacb
    void vorgang_starten();
    // wir übergeben der auszahlung ein objekt von bankautomat namens atm
    auszahlung(bankautomat* atm);
    // getter und setter
    int getBetrag();
    void setBetrag(int betrago);
public slots:
    // signals und slots immernoch!
    void betragBestaetigen(int betrag);
    void auszahlen(int betago, string pin);
signals:
    string pin_eingabe();

};

#endif // AUSZAHLUNG_H
