#ifndef SITZUNG_H
#define SITZUNG_H

#include "bankautomat.h"
#include "bankzentrale.h"
#include "geldfach.h"
#include "id_kartenleser.h"

#include<QObject>
#include<string>
class bankautomat;

class sitzung: public QObject {
private:
    Q_OBJECT
    bankautomat* atm;
    class monitor* display;
    class geldfach* fach;
    class id_kartenleser* kartenleser;
    class Karte* karte;
    class bankzentrale* zentrale;

public:
    void sitzung_beenden();
    void sitzung_starten();
    void sitzung_wechseln();
    int getBetrag();

    //    std::string pin_eingabe();
    //    void vorgang_starten();
    //    void pin_aendern();

    bankautomat* getAtm();

    void setDisplay(monitor* dis);
    monitor* getDisplay();

    void setGeldfach(geldfach* fach);
    geldfach* getGeldfach();

    void setKarte(Karte* karte);
    Karte* getKarte();

    void setKartenleser(id_kartenleser* kartenleser);
    id_kartenleser* getKartenleser();

    void setZentrale(bankzentrale* zentrale);
    bankzentrale* getZentrale();

    sitzung(bankautomat* atm);
private slots:
    //    virtual void betragBestaetigen(int);

};

#endif // SITZUNG_H
