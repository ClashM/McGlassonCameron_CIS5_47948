/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Created on October 2, 2018, 11:17 PM
 * Purpose: Rock Paper Scissors
 */

#include <iostream> //cin, cout


int main()
{
    char player1, player2, retry;   //User defined variables
    bool cont, valid;               //Boolean expressions for loop escapes
    using namespace std;
    cout << "Rock Paper Scissors\nInput either R, P, or S to play.\n";
    do //Loop for repeating program
    {
        do //Loop for ensuring valid response from player 1
        {
            valid=false;
            cout << "Player 1: ";
            cin >> player1;
            switch(player1)
            {
                case 'R':
                case 'r':
                    player1='R';
                    valid=true;
                    break;
                case 'P':
                case 'p':
                    player1='P';
                    valid=true;
                    break;
                case 'S':
                case 's':
                    player1='S';
                    valid=true;
                    break;
                default:
                    cout << "Try again ";
                    break;
            }
        }while(valid==false);
        
        //Compares characters after player 2 makes decision
        do //Loop for ensuring valid response from player 2
        {
            valid=false;
            cout << "Player 2: ";
            cin >> player2;
            switch(player2)
            {
                case 'R':
                case 'r':
                    valid=true;
                    if(player1=='R')
                        cout << "Tie game!";
                    if(player1=='P')
                        cout << "Paper covers rock! Player 1 wins!";
                    if(player1=='S')
                        cout << "Rock crushes scissors! Player 2 wins!";
                    break;
                case 'P':
                case 'p':
                    valid=true;
                    if(player1=='R')
                        cout << "Paper covers rock! Player 2 wins!";
                    if(player1=='P')
                        cout << "Tie game!";
                    if(player1=='S')
                        cout << "Scissors cut paper! Player 1 wins!";
                    break;
                case 'S':
                case 's':
                    valid=true;
                    if(player1=='R')
                        cout << "Rock crushes scissors! Player 1 wins!";
                    if(player1=='P')
                        cout << "Scissors cut paper! Player 2 wins!";
                    if(player1=='S')
                        cout << "Tie game!";
                    break;
                default:
                    cout << "Try again ";
                    break;
            }
        }while(valid==false);
        
        //Asks whether to repeat program or end it
        cout << "\nWould you like to try again? Y/N: ";
        cin >> retry;
        switch(retry)
        {
            case 'Y':
            case 'y':
                cont=true;
                break;
            case 'N':
            case 'n':
                cont=false;
                break;
            default:
                cout << "Invalid response, ending...";
                break;
        }
    } while(cont == true);
    return 0;
}

