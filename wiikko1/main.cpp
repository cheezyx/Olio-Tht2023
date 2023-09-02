#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int game(int maxnum);

int main()
{
    int num;
    cout <<"Anna maksimi numero arvattavaksi"<< endl;
    cin >> num;
    int count = game(num);
    cout <<"Arvaukset: "<< count << endl;

    return 0;
}
int game(int maxnum) {
    srand(time(0)); // alustetaan satunnaislukugeneraattori

    int satunnainenLuku = rand()%maxnum;
    int kayttajanNumero = -1;
    int count = 0;

    while(kayttajanNumero != satunnainenLuku)
    {
        cout<<"Arvaa luku 0-" <<maxnum<< " valilta"<< endl;
        cin>>kayttajanNumero;
        if (kayttajanNumero < satunnainenLuku)
        {
            cout <<"Arvattava numero on isompi" << endl;
        }
        if (kayttajanNumero > satunnainenLuku) {
            cout << "Arvattava numero on pienempi" << endl;
        }
        count++;
    }
    cout << "Oikea numero! :D "<< endl;

    return count;
}
