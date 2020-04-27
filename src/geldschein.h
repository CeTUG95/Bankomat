#ifndef GELDSCHEIN_H
#define GELDSCHEIN_H
#include <string>

using namespace std;

class geldschein{
private:
    int wert;
    string farbe;
    string  geldschein_format;
public:
    geldschein();
    int getWert();
    string getFarbe();
    string getGeldschein_Format();
    void setWert(int wert_);
    void setFarbe(string farbe_);
    void setGeldschein_Format(string geldschein_format_);
};

#endif // GELDSCHEIN_H
