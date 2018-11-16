/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Yahtzee Dice Rolling
 * Created on November 3, 2018, 10:25 AM
 */

#include <iostream> //cin cout
#include <cstdlib>  //rand srand
#include <ctime>    //time

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));      //Seed random number generator from system time
    
    bool cont, valid;                               //Booleans for checking valid inputs and looping program
    char retry;                                     //Character input for looping program
    int die1, die2, die3, die4, die5;               //Die values
    int input1, input2, input3, input4, keep;       //Input values and number kept per round
    
    cout << "*****Yahtzee*****\nRoll 5 dice, keep desired values, roll again up to two times."<<endl;
    do //Loop program based on user choice
    {
        input1 = input2 = input3 = input4 = 0; //Input variables initialized at zero for use as boolean operators
        int numHeld = 0;                       //Number of dice held
        string kept = "";                      //Values of dice held
        cout << "First roll:" << endl;
        for(int i=1; i<=5-numHeld; i++)        //Loop rolls 5 - held dice and assigns to die values
        {
            cout << "Die " << i << ": ";
            switch(i)
            {
                case 1:
                    die1 = rand()%6+1;      //Random number from 1-6
                    cout << die1 << endl;   //Output die rolled
                    break;
                case 2:
                    die2 = rand()%6+1;      //Random number from 1-6
                    cout << die2 << endl;   //Output die rolled
                    break;
                case 3:
                    die3 = rand()%6+1;      //Random number from 1-6
                    cout << die3 << endl;   //Output die rolled
                    break;
                case 4:
                    die4 = rand()%6+1;      //Random number from 1-6
                    cout << die4 << endl;   //Output die rolled
                    break;
                case 5:
                    die5 = rand()%6+1;      //Random number from 1-6
                    cout << die5 << endl;   //Output die rolled
                    break;
            }
        }
        
        cout << "How many dice would you like to keep? ";
        cin >> keep;                                        //User inputs number of dice to keep
        
        if(keep != 0 && keep !=5-numHeld)                  //Ensure user isn't keeping all dice or none before asking for values
        {
            cout << "Enter the numbers of all the dice you would like to keep.\nSeparate by spaces: ";
                cin >> input1;
            if(keep>1)              //If keeping 2 or more dice
                cin >> input2;
            if(keep>2)              //If keeping 3 or more dice
                cin>>input3;
            if(keep>3)              //If keeping 4 dice
                cin>>input4;
            
            if(input1)              //If input value is not zero
            {
                numHeld++;          //Add one to held dice count
                switch(input1)
                {
                    case 1:
                        kept += static_cast<char>(die1) + '0';  //Convert die to char value, must add 0 char for it to keep its numerical value
                        break;
                    case 2:
                        kept += static_cast<char>(die2) + '0';
                        break;
                    case 3:
                        kept += static_cast<char>(die3) + '0';
                        break;
                    case 4:
                        kept += static_cast<char>(die4) + '0';
                        break;
                    case 5:
                        kept += static_cast<char>(die5) + '0';
                        break;
                    default:
                        break;
                }
                kept += " ";
            }
            if(input2)               //If input value is not zero            
            {
                numHeld++;
                switch(input2)
                {
                    case 1:
                        kept += static_cast<char>(die1) + '0';
                        break;
                    case 2:
                        kept += static_cast<char>(die2) + '0';
                        break;
                    case 3:
                        kept += static_cast<char>(die3) + '0';
                        break;
                    case 4:
                        kept += static_cast<char>(die4) + '0';
                        break;
                    case 5:
                        kept += static_cast<char>(die5) + '0';
                        break;
                    default:
                        break;
                }
                kept += " ";
            }
            if(input3)               //If input value is not zero
            {
                numHeld++;
                switch(input3)
                {
                    case 1:
                        kept += static_cast<char>(die1) + '0';
                        break;
                    case 2:
                        kept += static_cast<char>(die2) + '0';
                        break;
                    case 3:
                        kept += static_cast<char>(die3) + '0';
                        break;
                    case 4:
                        kept += static_cast<char>(die4) + '0';
                        break;
                    case 5:
                        kept += static_cast<char>(die5) + '0';
                        break;
                    default:
                        break;
                }
                kept += " ";
            }
            if(input4)               //If input value is not zero
            {
                numHeld++;
                switch(input4)
                {
                    case 1:
                        kept += static_cast<char>(die1) + '0';
                        break;
                    case 2:
                        kept += static_cast<char>(die2) + '0';
                        break;
                    case 3:
                        kept += static_cast<char>(die3) + '0';
                        break;
                    case 4:
                        kept += static_cast<char>(die4) + '0';
                        break;
                    case 5:
                        kept += static_cast<char>(die5) + '0';
                        break;
                    default:
                        break;
                }
                kept += " ";
            }
        }
        else if(keep == 5)           //If user has kept all dice
        {
            numHeld = 5;             //Number held is equal to max number of dice and all current values added to kept values
            kept += static_cast<char>(die1) + '0';
            kept += " ";
            kept += static_cast<char>(die2) + '0';
            kept += " ";
            kept += static_cast<char>(die3) + '0';
            kept += " ";
            kept += static_cast<char>(die4) + '0';
            kept += " ";
            kept += static_cast<char>(die5) + '0';
            kept += " ";
        }
        
        if(numHeld < 5) //Second Roll, ensure there are still unkept dice
        {
            input1 = input2 = input3 = input4 = 0; //Zero out inputs
            cout << "Second roll:" << endl;

            for(int i=1; i<=5-numHeld; i++)        //Loop rolls 5 - held dice and assigns to die values
            {
                cout << "Die " << i << ": ";
                switch(i)
                {
                    case 1:
                        die1 = rand()%6+1;
                        cout << die1 << endl;
                        break;
                    case 2:
                        die2 = rand()%6+1;
                        cout << die2 << endl;
                        break;
                    case 3:
                        die3 = rand()%6+1;
                        cout << die3 << endl;
                        break;
                    case 4:
                        die4 = rand()%6+1;
                        cout << die4 << endl;
                        break;
                    case 5:
                        die5 = rand()%6+1;
                        cout << die5 << endl;
                        break;
                }
            }

            cout << "How many dice would you like to keep? ";
            cin >> keep;                                        //User inputs number of dice to keep

            if(keep != 0 && keep !=5-numHeld)                   //Ensure user isn't keeping all dice or none before asking for values
            {
                cout << "Enter the numbers of all the dice you would like to keep.\nSeparate by spaces: ";
                    cin >> input1;
                if(keep>1)
                    cin >> input2;
                if(keep>2)
                    cin>>input3;
                if(keep>3)
                    cin>>input4;

                if(input1)
                {
                    numHeld++;
                    switch(input1)
                    {
                        case 1:
                            kept += static_cast<char>(die1) + '0';
                            break;
                        case 2:
                            kept += static_cast<char>(die2) + '0';
                            break;
                        case 3:
                            kept += static_cast<char>(die3) + '0';
                            break;
                        case 4:
                            kept += static_cast<char>(die4) + '0';
                            break;
                        case 5:
                            kept += static_cast<char>(die5) + '0';
                            break;
                        default:
                            break;
                    }
                    kept += " ";
                }
                if(input2)
                {
                    numHeld++;
                    switch(input2)
                    {
                        case 1:
                            kept += static_cast<char>(die1) + '0';
                            break;
                        case 2:
                            kept += static_cast<char>(die2) + '0';
                            break;
                        case 3:
                            kept += static_cast<char>(die3) + '0';
                            break;
                        case 4:
                            kept += static_cast<char>(die4) + '0';
                            break;
                        case 5:
                            kept += static_cast<char>(die5) + '0';
                            break;
                        default:
                            break;
                    }
                    kept += " ";
                }
                if(input3)
                {
                    numHeld++;
                    switch(input3)
                    {
                        case 1:
                            kept += static_cast<char>(die1) + '0';
                            break;
                        case 2:
                            kept += static_cast<char>(die2) + '0';
                            break;
                        case 3:
                            kept += static_cast<char>(die3) + '0';
                            break;
                        case 4:
                            kept += static_cast<char>(die4) + '0';
                            break;
                        case 5:
                            kept += static_cast<char>(die5) + '0';
                            break;
                        default:
                            break;
                    }
                    kept += " ";
                }
                if(input4)
                {
                    numHeld++;
                    switch(input4)
                    {
                        case 1:
                            kept += static_cast<char>(die1) + '0';
                            break;
                        case 2:
                            kept += static_cast<char>(die2) + '0';
                            break;
                        case 3:
                            kept += static_cast<char>(die3) + '0';
                            break;
                        case 4:
                            kept += static_cast<char>(die4) + '0';
                            break;
                        case 5:
                            kept += static_cast<char>(die5) + '0';
                            break;
                        default:
                            break;
                    }
                    kept += " ";
                }
            }
            
            else if(keep == 5-numHeld)                          //If user has kept all remaining dice
            {
                 for(int i=1; i<=5-numHeld; i++)                //For loop fetches values of all remaining dice
                {
                     switch(i)
                     {
                        case 1:
                           kept += static_cast<char>(die1) + '0';
                           kept += " ";
                           break;
                       case 2:
                           kept += static_cast<char>(die2) + '0';
                           kept += " ";
                           break;
                       case 3:
                           kept += static_cast<char>(die3) + '0';
                           kept += " ";
                           break;
                       case 4:
                           kept += static_cast<char>(die4) + '0';
                           kept += " ";
                           break;
                       case 5:
                           kept += static_cast<char>(die5) + '0';
                           kept += " ";
                           break;
                       default:
                           break;
                     }
                }
                numHeld = 5;
            }
        }
        
        if(numHeld < 5) //Final Roll, ensure there are still unkept dice
        {
            input1 = input2 = input3 = input4 = 0; //Zero out inputs
            cout << "Third roll:" << endl;

            for(int i=1; i<=5-numHeld; i++) //Loop rolls 5 - held dice and adds them to values
            {
                cout << "Die " << i << ": ";
                switch(i)
                {
                    case 1:
                        die1 = rand()%6+1;
                        cout << die1 << endl;
                        kept += static_cast<char>(die1) + '0';
                        kept += " ";
                        break;
                    case 2:
                        die2 = rand()%6+1;
                        cout << die2 << endl;
                        kept += static_cast<char>(die2) + '0';
                        kept += " ";
                        break;
                    case 3:
                        die3 = rand()%6+1;
                        cout << die3 << endl;
                        kept += static_cast<char>(die3) + '0';
                        kept += " ";
                        break;
                    case 4:
                        die4 = rand()%6+1;
                        cout << die4 << endl;
                        kept += static_cast<char>(die4) + '0';
                        kept += " ";
                        break;
                    case 5:
                        die5 = rand()%6+1;
                        cout << die5 << endl;
                        kept += static_cast<char>(die5) + '0';
                        kept += " ";
                        break;
                }
            }
            numHeld = 5;      //Sets number of dice held to maximum
        }
        
        cout << "Your final dice: " << kept << "\n"; //Output final values of kept dice
        
        valid=false;        //Initialize validity check
        while(valid==false) //Continue to ask user for valid input until one is received
        {
            cout << "Would you like to play another round? Y/N: ";
            cin >> retry;
            switch(retry)
            {
                case 'Y':
                case 'y':
                    valid=true; //Input is valid, cancel input loop
                    cont=true;  //User wants to loop program
                    break;
                case 'N':
                case 'n':
                    valid=true; //Input is valid, cancel input loop
                    cont=false; //User wants to exit program
                    break;
                default:        //Input is not valid, repeat input loop
                    break;
            }
        }
        
    }while(cont == true);

    return 0;
}