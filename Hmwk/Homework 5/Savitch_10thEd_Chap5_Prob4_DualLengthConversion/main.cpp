/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Unit Conversion Metric and Imperial lengths
 * Created on November 11, 2018, 6:26 PM
 */

#include <iostream>
#include <cmath>

void input(float& input1, float& input2, int choice);
void output(float& m, float& cm, float mVal, float cVal, int choice);
void ft2m(float& ft, float& in);
void m2ft(float& m, float& cm);
void redo(bool& cont);

using namespace std;

int main()
{
    bool cont = true;
    do
    {
        float input1, input2, val1, val2;
        int choice;
        cout << "Conversion Menu\nType 1 for Meters to Feet\nType 2 for Feet to Meters\nInput: ";
        cin >> choice;
        if(choice == 1)
        {
            input(input1, input2, choice);
            val1 = input1, val2 =input2;
            m2ft(input1, input2);
            output(input1, input2, val1, val2, choice);
            
        }
        else if(choice == 2)
        {
            input(input1, input2, choice);
            val1 = input1, val2 =input2;
            ft2m(input1, input2);
            output(input1, input2, val1, val2, choice);
        }
        else
            cout << "Invalid response." << endl;
        
        redo(cont);  
    }while(cont == true);
    return 0;
}

void input(float& input1, float& input2, int choice)
{
    if(choice == 1)
        cout << "Input meters and centimeters to be converted to feet and inches: ";
    if(choice == 2)
        cout << "Input feet and inches to be converted to meters and centimeters: ";
    cin >> input1 >> input2;
}

void output(float& m, float& cm, float mVal, float cVal, int choice)
{
    if(choice == 1)
        cout << mVal <<" meters and " << cVal << " centimeters is " 
         << m << " feet and " << cm << " inches." << endl;
    if(choice == 2)
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
