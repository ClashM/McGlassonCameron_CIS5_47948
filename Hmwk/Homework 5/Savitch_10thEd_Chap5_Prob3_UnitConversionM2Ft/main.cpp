/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Unit Conversion Meters to Feet
 * Created on November 10, 2018, 11:31 AM
 */

#include <iostream>
#include <cmath>

void input(float& input1, float& input2);

void output(float& ft, float& in, float fVal, float iVal);

void m2ft(float& m, float& cm);

void redo(bool& cont);

using namespace std;

int main()
{
    bool cont = true;
    do
    {
        float input1, input2, fVal, iVal;
        input(input1, input2);
        fVal = input1, iVal = input2;
        m2ft(input1, input2);
        output(input1, input2, fVal, iVal);
        redo(cont);
        
    }while(cont == true);
    return 0;
}

void input(float& input1, float& input2)
{
    cout << "Input meters and centimeters to be converted to feet and inches: ";
    cin >> input1 >> input2;
}

void output(float& ft, float& in, float fVal, float iVal)
{
    cout << fVal <<" meters and " << iVal << " centimeters is " 
         << ft << " feet and " << in << " inches." << endl;
}

void m2ft(float& m, float& cm)
{
    float temp = (m*100)+cm;
    temp/=2.54;
    m=floor(temp/12);
    cm=floor(fmod(temp, 12));
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
