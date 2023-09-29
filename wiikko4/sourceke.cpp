#include <iostream>
#include "asunto.h"
using namespace std;

Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
}

void Asunto::maarita(int a, int n) {
    asukasMaara = a;
    neliot = n;
    cout<<"asunto maaritetty, asukkaita= " <<asukasMaara<< " nelioita= "<<neliot<<endl;
};
double Asunto::laskeKulutus(double h){

    double kulutus = h*asukasMaara*neliot;
   // cout<<"asunnon kulutus ,kun hinta = "<<h<<" on "<<kulutus<<endl;
    return kulutus;
};


Kerros::Kerros() {
    as1= new Asunto;
    as2= new Asunto;
    as3= new Asunto;
    as4= new Asunto;
    cout<<"Kerros luotu"<<endl;
}
    Kerros::~Kerros() {
    delete as1;
    as1 = nullptr;

    delete as2;
    as2 = nullptr;

    delete as3;
    as3 = nullptr;

    delete as4;
    as4 = nullptr;
}
void Kerros::maaritaAsunnot() {

    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
   //
   // as3.maarita(2,100);
    //as4.maarita(2,100);
};
double Kerros::laskeKulutus(double h) {

    //double kulutus = as1->laskeKulutus(h)+as2->laskeKulutus(h)
    //+ as3->laskeKulutus(h)+as4->laskeKulutus(h)
    return as1->laskeKulutus(h)+as2->laskeKulutus(h)
           + as3->laskeKulutus(h)+as4->laskeKulutus(h);
    //return kulutus;
};

Katutaso::Katutaso() {
    as1= new Asunto;
    as2= new Asunto;
    cout<<"Katutaso luotu"<<endl;
}
void Katutaso::maaritaAsunnot() {
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    cout<<"Maaritetaan katutason kerrrokselta perittyja asuntoja"<<endl;
    //tää lause ei tee mitää järkee ^
    //jos tekee nii se on erittäin kummallisesti ymmärrettävissä
    this->Kerros::maaritaAsunnot();
};
double Katutaso::laskeKulutus(double h) {
    return as1->laskeKulutus(h)+as2->laskeKulutus(h)
           +Kerros::laskeKulutus(h);
};

Kerrostalo::Kerrostalo() {
    eka =  new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;

    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
};
Kerrostalo::~Kerrostalo() {
    delete eka;
    eka = nullptr;

    delete toka;
    toka = nullptr;

    delete kolmas;
    kolmas = nullptr;
}
double Kerrostalo::laskeKulutus(double h) {
    double katutasonKulutus = eka->laskeKulutus(h);
    double kerrostenKulutus = toka->laskeKulutus(h) + kolmas->laskeKulutus(h);
    return katutasonKulutus+kerrostenKulutus;
};
