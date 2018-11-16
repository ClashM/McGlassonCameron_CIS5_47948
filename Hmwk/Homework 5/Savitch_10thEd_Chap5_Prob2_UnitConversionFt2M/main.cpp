/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Unit Conversion Feet to Meters
 * Created on November 10, 2018, 8:40 AM
 */

#include <iostream>
#include <cmath>

void input(float& input1, float& input2);

void output(float& m, float& cm, float mVal, float cVal);

void ft2m(float& ft, float& in);

void redo(bool& cont);

using namespace std;

int main()
{
    bool cont = true;
    do
    {
        float input1, input2, mVal, cVal;
        input(input1, input2);
        mVal = input1, cVal=input2;
        ft2m(input1, input2);
        output(input1, input2, mVal, cVal);
        redo(cont);
        
    }while(cont == true);
    return 0;
}

void input(float& input1, float& input2)
{
    cout << "Input feet and inched to be converted to meters and centimeters: ";
    cin >> input1 >> input2;
}

void output(float& m, float& cm, float mVal, float cVal)
{
    cout << mVal << " feet and " << cVal << " inches is " 
         << m << " meters and " << cm << " centimeters." << endl;
}

void ft2m(float& ft, float& in)
{
    float temp;
    ft*=30.48;
    in*=2.54;
    temp=ft+in;
    ft=floor(temp/100);
    in=floor(fmod(temp, 100));    
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
