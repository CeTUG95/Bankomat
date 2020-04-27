#ifndef AUSZAHLUNGTEST_H
#define AUSZAHLUNGTEST_H


class auszahlungtest
{
private:
    int kontostand;
    int betrag;
public:
    auszahlungtest(int betrago, int kontostando){
        this->betrag = betrago;
        this->kontostand = kontostando;
    }
    int bewilligung(){
        if(betrag <= kontostand && betrag > 0){
            return 1;
        } else return 2;
    }
};

#endif // AUSZAHLUNGTEST_H
