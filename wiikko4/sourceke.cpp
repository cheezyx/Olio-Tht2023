#include <iostream>
#include "asunto.h"
using namespace std;

Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
    // asukkaita 2, nelioita 100
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
    cout<<"Kerros luotu"<<endl;
}
void Kerros::maaritaAsunnot() {

    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
};
double Kerros::laskeKulutus(double h) {

    //double kulutus = as1.laskeKulutus(h)+as2.laskeKulutus(h)
    //+ as3.laskeKulutus(h)+as4.laskeKulutus(h)
    return as1.laskeKulutus(h)+as2.laskeKulutus(h)
     + as3.laskeKulutus(h)+as4.laskeKulutus(h);
    //return kulutus;
};

Katutaso::Katutaso() {
    cout<<"Katutaso luotu"<<endl;
}
void Katutaso::maaritaAsunnot() {
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    this->Kerros::maaritaAsunnot();
};
double Katutaso::laskeKulutus(double h) {
    return as1.laskeKulutus(h)+as2.laskeKulutus(h)+Kerros::laskeKulutus(h);
};

Kerrostalo::Kerrostalo() {
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
};
double Kerrostalo::laskeKulutus(double h) {
    double katutasonKulutus = eka.laskeKulutus(h);
    double kerrostenKulutus = toka.laskeKulutus(h) + kolmas.laskeKulutus(h);
    return katutasonKulutus+kerrostenKulutus;
};
