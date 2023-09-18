#ifndef CLASSH_H
#define CLASSH_H
#include <ctime>
#include <iostream>

using namespace std;
#endif // CLASSH_H

class Game
{
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult()
    {
        cout<<"Your guess is right = "<<randomNumber<<endl;
        cout<<"You guessed the right answer = "<<randomNumber<<" with "<<numOfGuesses<<" guesses" <<endl;
    };

public:
    Game(int maxNum) : maxNumber(maxNum), playerGuess(-1), numOfGuesses(0)
    {
        cout<<"GAME CONSTRUCTOR: object initialized with " <<maxNumber<< " as a maximum value"<< endl;
    };
    ~Game()
    {
        cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
    };

    void play()
    {
        srand(time(0));
        randomNumber = rand()%maxNumber;

        while(playerGuess != randomNumber)
        {
            cout<<"Give your guess between 0- " <<maxNumber<< endl;
            cin>>playerGuess;

            if (playerGuess < randomNumber)
            {
                cout <<"Your guess is too small" << endl;
            }
            if (playerGuess > randomNumber) {
                cout << "Your guess is too big" << endl;
            }
            numOfGuesses++;
        }
        printGameResult();

    };

};
