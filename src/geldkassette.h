#ifndef GELDKASSETTE_H
#define GELDKASSETTE_H

#include "geldschein.h"

class geldkassette
{
private:
    int anzahl;
    char geldschein_Format;
    class geldschein *schein;
public:
    void entnehme_geldschein();
    geldkassette();
    int getAnzahl();
    char getGeldschein_Format();
    void setAnzahl(int anzahl_);
    void setGeldschein_Format(char Format);
};

#endif // GELDKASSETTE_H
