/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Unit Conversion Pounds to Kilograms
 * Created on November 11, 2018, 6:49 PM
 */

#include <iostream>
#include <cmath>

void input(float& input1, float& input2);

void output(float& a, float& b, float val1, float val2);

void lbs2kg(float& a, float& b);

void redo(bool& cont);

using namespace std;

int main()
{
    bool cont = true;
    do
    {
        float input1, input2, val1, val2;
        input(input1, input2);
        val1 = input1, val2 =input2;
        lbs2kg(input1, input2);
        output(input1, input2, val1, val2);
        redo(cont);
    }while(cont == true);
    return 0;
}

void input(float& input1, float& input2)
{
    cout << "Input pounds and ounces to be converted to kilograms and grams: ";
    cin >> input1 >> input2;
}

void output(float& a, float& b, float val1, float val2)
{
    cout << val1 <<" pounds and " << val2 << " ounces is " 
         << a << " kilograms and " << b << " grams." << endl;
}

void lbs2kg(float& a, float& b)
{
    float temp;
    a*=16;
    temp=a+b;
    a=floor((temp*28.35)/1000);
    b=floor(fmod(temp*28.35, 1000));    
}

void redo(bool& cont)
{
    bool valid=false;        //Initialize validity check
    char retry;
    while(valid==false) //Continue to ask user for valid input until one is received
    {
        cout << "Would you like to run another conversion? Y/N: ";
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
}