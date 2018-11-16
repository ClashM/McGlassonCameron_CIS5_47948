/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Roman Numerals
 * Created on October 3, 2018, 4:04 PM
 */

#include <iostream>

using namespace std;

int main()
{
    char retry;
    bool cont, valid;
    string roman;

    do
    {
        int thousands, hundreds, tens, ones; //Variables for places
        int year; //User defined year
        do //Prompt for year until one is valid
        {
            cout << "Input a year between 1000 and 3000 to get it in Roman Numerals: ";
            cin >> year;
        }while(year<1000 || year>3000);

        //Break year into places for thousamds, hundreds, tens, and ones
        thousands=year/1000;
        hundreds=(year%1000)/100;
        tens=(year%100)/10;
        ones=year%10;
        
        //Add M for every thousand
        for(int i = 0; i < thousands; i++)
            roman += 'M';

        //Add appropriate hundreds numerals
        switch(hundreds)
        {
            case 0:
                break;
            case 9:
                roman += "CM";
                break;
            case 8:
                roman += "DCCC";
                break;
            case 7:
                roman += "DCC";
                break;
            case 6:
                roman += "DC";
                break;
            case 5:
                roman += "D";
                break;
            case 4:
                roman += "CD";
                break;
            case 3:
                roman += "CCC";
                break;
            case 2:
                roman += "CC";
                break;
            case 1:
                roman += "C";
                break;    
        }
        
        //Add appropriate tens numerals
        switch(tens)
        {
            case 0:
                break;
            case 9:
                roman += "XC";
                break;
            case 8:
                roman += "LXXX";
                break;
            case 7:
                roman += "LXX";
                break;
            case 6:
                roman += "LX";
                break;
            case 5:
                roman += "L";
                break;
            case 4:
                roman += "XL";
                break;
            case 3:
                roman += "XXX";
                break;
            case 2:
                roman += "XX";
                break;
            case 1:
                roman += "X";
                break;    
        }

        //Add appropriate ones numerals
        switch(ones)
        {
            case 0:
                break;
            case 9:
                roman += "IX";
                break;
            case 8:
                roman += "VIII";
                break;
            case 7:
                roman += "VII";
                break;
            case 6:
                roman += "VI";
                break;
            case 5:
                roman += "V";
                break;
            case 4:
                roman += "IV";
                break;
            case 3:
                roman += "III";
                break;
            case 2:
                roman += "II";
                break;
            case 1:
                roman += "I";
                break;    
        }
        
        //Output
        cout << "The year " << year << " is " << roman << " in Roman numerals.\n";
                
        //Prompt for repeat
        do{
            valid=false;
            cout << "Would you like to run this calculation again? Y/N: ";
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

