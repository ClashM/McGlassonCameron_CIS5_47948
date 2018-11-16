/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Blackjack Hand Counter
 * Created on October 4, 2018, 4:12 PM
 */

#include <iostream>

using namespace std;

int main()
{
    bool cont, valid; //Booleans for loop breaks
    
    cout << "Blackjack Hand Counter\n"
            << "Input card face values from A, 2-9, T for ten, and J, Q, K\n";
    do //Loop for retry
    {
        char retry; //Retry input
        //Card data zeroed out to clear on retries
        int count, total, card1=0, card2=0, card3=0, card4=0, card5=0;
        bool aceCount=false; //Whether an ace is counted among the cards
        
        //User input for card number
        do
        {
            cout << "How many cards do you have: ";
            cin >> count;
        }while(count<1 || count>5);
        
        //For loop cycles through cards for inputs
        for(int i=1; i<=count; i++)
        {
            char card;   //User input as char value
            int cardVal; //Variable for numeric card value
            valid=false; //Boolean checking whether response is valid
            
            //Loop until valid input is detected
            do
            {
                cout << "Input the value of card #" << i << ": ";
                cin >> card;
                switch(card) //Takes card value, checks whether it's valid, assigns numerical value
                {
                    case '2':       //Card char value
                        cardVal=2;  //Assigns numerical value
                        valid=true; //Declares valid scope
                        break;      //Breaks switch statement
                    case '3':
                        cardVal=3;
                        valid=true;
                        break;
                    case '4':
                        cardVal=4;
                        valid=true;
                        break;
                    case '5':
                        cardVal=5;
                        valid=true;
                        break;
                    case '6':
                        cardVal=6;
                        valid=true;
                        break;
                    case '7':
                        cardVal=7;
                        valid=true;
                        break;
                    case '8':
                        cardVal=8;
                        valid=true;
                        break;
                    case '9':
                        cardVal=9;
                        valid=true;
                        break;
                    case 't':
                    case 'T':
                    case 'j':
                    case 'J':
                    case 'q':
                    case 'Q':
                    case 'k':
                    case 'K':
                        cardVal=10;
                        valid=true;
                        break;
                    case 'a':
                    case 'A':
                        cardVal=1;
                        aceCount=true; //Declares an ace is in the hand
                        valid=true;
                        break;
                    default: //Not defined in scope so not valid
                        valid=false;
                        break;
                }
            }while(valid==false);
            
            //Assigns card values to variables
            //In hindsight I realize this is superfluous
            //Previous switch statement could have just totaled cards
            switch(i)
            {
                case 1:
                    card1=cardVal;
                    break;
                case 2:
                    card2=cardVal;
                    break;
                case 3:
                    card3=cardVal;
                    break;
                case 4:
                    card4=cardVal;
                    break;
                case 5:
                    card5=cardVal;
                    break;
                default:
                    cout << "Error";
                    return 0;
            }            
        }
        
        //Add card values for approximation of hand
        total=card1+card2+card3+card4+card5;
        //If aces are detected and total is low enough to raise, do so
        if(aceCount&&total<=11)
            total+=10;  //Aces already counted as 1 so just add 10 to raise              
        
        //Outputs
        if(total<=21)
            cout << "Your card total is "<<total<<"\n";
        else
            cout << "Busted\n";
        
        //Loop for repeating program
        do{
            valid=false;
            cout << "Would you like to run this calculation again? (Y/N): ";
            cin >> retry;
            switch(retry)
            {
                case 'Y':
                case 'y':
                    valid=true;
                    cont=true;
                    break;
                case 'N':
                case 'n':
                    valid=true;
                    cont=false;
                    break;
                default:
                    valid=false;
                    break;
            }
        }while(valid==false);

    }while(cont==true);

    return 0;
}