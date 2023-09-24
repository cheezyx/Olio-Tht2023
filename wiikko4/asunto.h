#ifndef ASUNTO_H
#define ASUNTO_H

#endif // ASUNTO_H
#include<iostream>

using namespace std;

class Asunto {
public:
    Asunto();
    ~Asunto();
    int asukasMaara;
    int neliot;

    void maarita(int, int);
    double laskeKulutus(double);
};

class Kerros {
public:
    Kerros();
    ~Kerros();
    Asunto as1,as2,as3,as4;
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
};

class Katutaso: public Kerros {
public:
    Katutaso();
    ~Katutaso();
    Asunto as1,as2;
    void maaritaAsunnot() override;
    double laskeKulutus(double);
};

class Kerrostalo {
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);

private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};

