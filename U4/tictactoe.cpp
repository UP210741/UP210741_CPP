/*  Integrantes: 
Lopez Morales Bertha Adriana 
Aguilar Gonzalez Maria Fernanda
Proyecto "Tic Tac Toe" 
Unidad: 4 */ 
#include <iostream>
// Namespace avoid using std:: on all input and output
using namespace std;

#include <stdlib.h>


char gameArea[3][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'}};
bool existsPlay(int play);  
void printmove();
bool checkplay(int play);
void placePlay(int play);
bool checkwinner();
int play;             // save the play variable
int PlayerTurn = 0; // change player turns
int ren, col;
void gotoxy(int x,int y);


int main()
{
    bool existing, busy, win = false;
    int playAgain;
    printmove();// we use the variable printmove 
    
    do
    {
        cout << endl;
        gotoxy(17,7);
        cout << "Enter a play:";
        cin >> play;
        system("clear"); // it is to clean screen in linux
        existing = existsPlay(play); //it is to know if the move exists in the existing game place
        busy = checkplay(play);

        if (existing == true) //if the existing place is free by the user, place the move on the board
        {
            if (busy == false)
            {
                placePlay(play);
                PlayerTurn++;
            }
            else if (existing == true){
            gotoxy(35,7);
            cout << "Occupied box, choose another one";
            }
        }
         //system("clear"); // it is to clean screen in linux
        printmove(); // each move made by the user the program checks if the player has won and so on infinitely until one of the 2 wins
        win = checkwinner();//each move made by the user the program checks if the player has won and so on infinitely until one of the 2 wins
    } while ((PlayerTurn < 9) && (win) == false);

}

void gotoxy(int x,int y){
    cout<< "\033["<< y << ";" << x << "f" ;
}

//printmove is to print the board with the correct dimensions
void printmove()
{
    int x = 0, y = 0;

    gotoxy(1,3);
    for (int row = 0; row < 5; row++)
    {
        
        for (int col = 0; col < 9; col++)
        {

            if (row == 1 || row == 3)
            {
                cout << "-";
            }
            else if (col == 1 || col == 4 || col == 7)
            {
                if (gameArea[x][y] == 'X')
                {
                    cout << "\x1B[34m" << gameArea[x][y]<< "\x1B[0m";
                }
                else if (gameArea[x][y] == 'O')
                {
                    cout << "\x1B[31m"  << gameArea[x][y]<< "\x1B[0m" ;
                }
                else
                {
                    cout << gameArea[x][y];
                }
                y++;
            }
            else
            {
                cout << " ";
            }
            
            if (col == 2 || col == 5)
            {
  
                cout << "|";
            }
        }
        cout << endl;
        if (row % 2 == 0)
        {
            x++;
        }
        y = 0;
    }
    gotoxy(1,1);
    cout << "Game tic tac toe " << endl;
    cout << endl;
    gotoxy(17,4);
    cout << "\x1B[34m" << "Player 1   X   " << "\x1B[33m" ;
    cout << "\x1B[31m" << "Player 2   O   " << "\x1B[30m" ;
    cout << endl;
}
// existsPlay is to know if the numbers are valid from 1 to 9
bool existsPlay(int play)
{
    if (play >= 1 && play <= 9)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// checkplay is to know which coordinate is the number we are choosing
bool checkplay(int play)
{

    if (play == 1)
    {
        ren = 0;
        col = 0;
    }
    else if (play == 2)
    {
        ren = 0;
        col = 1;
    }
    else if (play == 3)
    {
        ren = 0;
        col = 2;
    }
    else if (play == 4)
    {
        ren = 1;
        col = 0;
    }
    else if (play == 5)
    {
        ren = 1;
        col = 1;
    }
    else if (play == 6)
    {
        ren = 1;
        col = 2;
    }
    else if (play == 7)
    {
        ren = 2;
        col = 0;
    }
    else if (play == 8)
    {
        ren = 2;
        col = 1;
    }
    else if (play == 9)
    {
        ren = 2;
        col = 2;
    }

    if (gameArea[ren][col] == 'X' || gameArea[ren][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}


// placePlay is to know what type of character to put in this case X or O and exchange turns
void placePlay(int play)
{
    if (PlayerTurn % 2 == 0)
    {
        gameArea[ren][col] = 'X';
    }
    else
    {
        gameArea[ren][col] = 'O';
    }
}


// The checkwinner is to know when player 1 or player 2 wins in the 9 possibilities that exist online
bool checkwinner()
{
    if ((gameArea[0][0] == gameArea[0][1] && gameArea[0][0] == gameArea[0][2]) ||
        (gameArea[1][0] == gameArea[1][1] && gameArea[1][0] == gameArea[1][2]) ||
        (gameArea[2][0] == gameArea[2][1] && gameArea[2][0] == gameArea[2][2]) ||
        (gameArea[0][0] == gameArea[1][0] && gameArea[0][0] == gameArea[2][0]) ||
        (gameArea[0][1] == gameArea[1][1] && gameArea[0][1] == gameArea[2][1]) ||
        (gameArea[0][2] == gameArea[1][2] && gameArea[0][2] == gameArea[2][2]) ||
        (gameArea[0][0] == gameArea[1][1] && gameArea[0][0] == gameArea[2][2]) ||
        (gameArea[0][2] == gameArea[1][1] && gameArea[0][2] == gameArea[2][0]))
    {
        //with if determine victory for player 1
        if (gameArea[ren][col] == 'X')
        {
            gotoxy(17,7);
            cout << "WIN for player 1";
            cout << endl;
            cout << endl;
            return true;
        }
        //with if determine victory for player 2
        else if (gameArea[ren][col] == 'O')
        {
            gotoxy(17,7);
            cout << "WIN for player 2";
            cout << endl;
            cout << endl;
            return true;
        }
        else
        {
            cout << endl;
            cout << "TIE";
            cout << endl;
            cout << endl;
            return true;
        }
    }
    else
    {

        return false;
    }
}