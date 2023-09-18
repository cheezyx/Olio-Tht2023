#include "classes.h"


    Chef::Chef(string chName) {
        name = chName;
        cout<<"Chef " << name << " constructor"<<endl;
        };
    Chef::~Chef() {
        cout<<"Chef "<< name <<" destructor"<<endl;
        };
    void Chef::makeSalad(){
        cout<<"Chef "<<name<<" makes salad"<<endl;
        };
    void Chef::makeSoup(){
        cout<<"Chef "<<name<<" makes soup"<<endl;
        };

    ItalianChef::ItalianChef(string chName, int f, int w):Chef(chName)  {
        water = w;
        flour = f;
        name = chName;
        cout<<"Chef "<< getName() << " constructor"<<endl;
        };
    string ItalianChef::getName() {
        return name;
        };
    void ItalianChef::makePasta() {
        cout<<"Chef "<< getName() << " makes pasta with speshal recipe"<<endl;
        cout<<"Chef "<< getName() << " uses flour = "<<flour<<endl;
        cout<<"Chef "<< getName() << " Uses water = "<<water<<endl;
    };
