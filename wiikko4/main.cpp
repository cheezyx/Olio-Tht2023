#include <iostream>
#include "asunto.h"

using namespace std;

int main()
{
    /*Asunto olio1;
    olio1.maarita(2,100);
    cout<<"asunnon kulutus, kun hinta = 1 on "<<olio1.laskeKulutus(1)<<endl;

    Katutaso olio2;
    olio2.maaritaAsunnot();
    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta = 1 on "<<olio2.laskeKulutus(1)<<endl;
    */

    Kerrostalo talo1;
    cout<<"Kerrostalon kulutus, = "<<talo1.laskeKulutus(1)<<endl;

    return 0;
}
