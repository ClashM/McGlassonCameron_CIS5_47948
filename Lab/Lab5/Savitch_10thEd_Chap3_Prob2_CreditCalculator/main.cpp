/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Credit Account Calculator
 * Created on October 4, 2018, 1:18 PM
 */

#include <iostream>

using namespace std;

int main()
{
    bool cont; //Boolean to determine whether to repeat program
    char retry; //Char for repeat prompt
    float balance, minimum, interest, total; //User defined balance and variables for calculation

    cout << "Revolving Credit Account Calculation\n";
    do{ //Loop for repeating calculation
        //User input
        cout << "Input account balance: ";
        cin >> balance;
        
        //Interest calculation
        if(balance<=1000)
            interest=0.015*balance; //Interest of 1.5% on first thousand
        if(balance>1000)
        {
            interest+=15; //Interest of 1.5% on first 1000
            interest+=(balance-1000)*0.01; //Interest of 1% on everything over 1000
        }
        total=balance+interest;
        
        //Minimum payment calculation
        if(total<=10) //Total is less than cutoff, minimum payment set to match
            minimum = total; 
        if(total>10)  //Total is greater than cutoff
        {
            if((total*0.1)>10) //Check whether 10% or $10 is more then set minimum payment
                minimum = total*0.1;
            else
                minimum = 10;
        }
        
        //Outputs
        cout << "Your total due is $" << total
                << "\nYour minimum payment is $" << minimum
                << "\nYour interest is $" << interest << "\n";
        
        //Prompt to repeat program
        do{
            cout << "Would you like to run this calculation again? (Y/N): ";
            cin >> retry;
        }while(retry!='Y'&&retry!='y'&&retry!='N'&&retry!='n');
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
        }
        
    }while(cont==true);

    return 0;
}

