#include <iostream>

using namespace std;

class board
{
    private: 
        int playerScore = 0;
        int gameScore = 0;
        char player = ' ';
        char computer = ' ';

        int getPlayerScore (void);
        int getGameScore (int gameScore);
        char setPlayerLetter(char player);
    
    public: 
    void DisplayBoard(string playerName, char headsOrTails);
    char playerFirst();
    char computerFirst();
        

};

int board::getPlayerScore(void)
{
    return playerScore;
}

char board::setPlayerLetter(char player)
{
    player = this->player;
}

void board::DisplayBoard(string playerName, char headsOrTails) 
{
     
    char board[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "\t\t\t\t\t\t Score: \n";
    cout << "\t\t\t\t\t\t " << playerName << ": " << playerScore;
    cout << "\t\t\t Tic-Tac-Toe";  
    
    cout<< "tt     |     |     \n";
    cout<< "tt  " << board[0][0] << "  | " << board[0][1] << "  |  " << board[0][2]<< " \n";
    cout<< "tt_____|_____|_____\n";
    cout<< "tt     |     |     \n";
    cout<< "tt  " << board[1][0] << "  | " << board[1][1] << "  |  " << board[1][2] << " \n";
    cout<< "tt_____|_____|_____\n";
    cout<< "tt     |     |     \n";
    cout<< "tt  " << board[2][0] << "  | " << board[2][1] << "  |  " << board[2][2] << " \n";
    cout<< "tt     |     |     \n";
    
}

char computerFirst()
{

}


//Taking a stab at a side-project. Open to any suggestions and ideas. 
//