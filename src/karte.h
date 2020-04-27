#ifndef GEHEIMZAHL_H
#define GEHEIMZAHL_H

#include "kontodaten.h"
class kontodaten;

class Karte{
private:
    int id;
    kontodaten* kdata;
public:
    Karte(kontodaten* kdata ,int id);
    Karte();
    int getID();
    void setID(int ID);
    kontodaten* getKundenDaten();
};

#endif
