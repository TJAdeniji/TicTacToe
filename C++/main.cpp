#include <iostream>
#include "board.h"

using namespace std;

int main(int argc, char const *argv[])
{
    string playerName;
    char headsOrTails;
    board player; 

    cout << "Welcome to Tic-Tac-Toe!!!\n";
    cout << "What's your name? \n";
    
    //cin >> playerName;
    cin >> playerName;  

    //player.setName(playerName);

    cout << "Would you like to go first? Please choose Heads(H) or Tails(T): \n";
    cin >> headsOrTails;
    toupper(headsOrTails);

    while (headsOrTails != 'H'|| headsOrTails != 'T')//Determines if the player or game goes first. 
    {
        cout << "Incorrect choice. Please enter H or T. \n";
        cin >> headsOrTails;
        toupper(headsOrTails);
    }  

    player.DisplayBoard(playerName, headsOrTails);


    return 0;
}


//Taking a stab at a side-project. Open to any suggestions and ideas. 
//