#ifndef BANKZENTRALE_H
#define BANKZENTRALE_H

#include "bankautomat.h"
#include "kontodaten.h"

#include <string>
#include<vector>

using namespace std;
class kontodaten;


class bankzentrale
{
private:
    vector<class kontodaten*> kontodatenList;

    //    Wir müssen hierbei (Geheimzahl) auf eine externe klasse zugreifen die den Typen bestimmt
public:

    bool geheimzahl_pruefung(string pin,Karte* i);
    bool transaktionsbewilligung(double betrag, Karte* i);
    void rechte_verteilen(double betrag, int i);
    void addKunde(kontodaten* kunde);
    vector<class kontodaten*> getKontodatenList();
    bankzentrale();
};

#endif // BANKZENTRALE_H
