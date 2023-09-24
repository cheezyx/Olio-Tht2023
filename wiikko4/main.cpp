#include <iostream>
#include "asunto.h"

using namespace std;

int main()
{
    /*Asunto olio1, olio2, olio3, olio4;
    Kerros kaka;

    Kerros* bptr;
    Katutaso d;
    bptr = &d;
    Katutaso foo; // Create a Katutaso object
bptr->maaritaAsunnot();

    kaka.maaritaAsunnot();

    //olio1.maarita(2, 100);
    //olio2.laskeKulutus(1);
    */

    //Asunto olio1, olio2, olio3, olio4; // Create four Asunto objects

    Katutaso foo;
    Kerros kaka;
    foo.maaritaAsunnot(); // Print "Maaritetaan katutason asuntoja"

    Asunto& as1 = foo.as1;
    Asunto& as2 = foo.as2;

    foo.as1.maarita(2, 100);
    foo.as2.maarita(2, 100);
    //olio2.maarita(2, 100);

    kaka.maaritaAsunnot();
    foo.as1.maarita(2, 100);
    foo.as2.maarita(2, 100);
    foo.as3.maarita(2, 100);
    foo.as4.maarita(2, 100);

    //olio1.laskeKulutus(1);
    return 0;
}
