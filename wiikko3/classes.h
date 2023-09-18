#ifndef CLASSES_H
#define CLASSES_H

#endif // CLASSES_H
#include<iostream>

using namespace std;

class Chef {
    public:
    Chef(string chName="");
    ~Chef();
    void makeSalad();
    void makeSoup();
    protected:
    string name;
};

class ItalianChef:public Chef {
    public:
    ItalianChef(string chName= "", int water=0, int flour= 0);
    string getName();
    void makePasta();
    private:
    int water;
    int flour;
};
