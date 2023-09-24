#include <iostream>
#include "asunto.h"
using namespace std;

Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
    // asukkaita 2, nelioita 100
}

Asunto::~Asunto()
{
}

void Asunto::maarita(int a, int n) {
    asukasMaara = a;
    neliot = n;
    cout<<"asunto maaritetty, asukkaita= " <<asukasMaara<< " nelioita= "<<neliot<<endl;
};
double Asunto::laskeKulutus(double h){

    double kulutus = h*asukasMaara*neliot;
    cout<<"asunnon kulutus ,kun hinta = "<<h<<" on "<<kulutus<<endl;
    return kulutus;
};

Kerros::Kerros() {
    cout<<"Kerros luotu"<<endl;
}
Kerros::~Kerros() {
}
void Kerros::maaritaAsunnot() {

    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
};


Katutaso::Katutaso() {
    cout<<"Katutaso luotu"<<endl;
}
Katutaso::~Katutaso() {
}
void Katutaso::maaritaAsunnot() {
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
}

Kerrostalo::Kerrostalo() {
    cout<<"Kerrostalo luotu"<<endl;
};
