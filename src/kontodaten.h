#ifndef KONTODATEN_H
#define KONTODATEN_H

#include <string>
#include <ctime>
#include "bankzentrale.h"
#include "karte.h"

using namespace std;
class bankzentrale;
class Karte;


class kontodaten{
private:
    bankzentrale* zentrale;
    string nachname;
    string vorname;
    string pin;
    double kontostand;
    Karte* kunden_id;

public:
    // Haufenweise Getter und Setter
    kontodaten(int id, string nname, string vname, double kontostand, bankzentrale* bank,string pin);
    double getKontostand();
    Karte* getID();
    string getNname();
    string getVname();
    void setVname(string Vname);
    void setNname(string Nname);
    void setKontostand(double kontostand_);
    void setID(int K_ID);
    string getPin();
    void setPin(string pin_);
};

#endif // KONTODATEN_H
