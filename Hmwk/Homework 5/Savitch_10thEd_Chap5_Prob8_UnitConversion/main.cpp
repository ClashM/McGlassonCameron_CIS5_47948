/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Unit Conversions - length and weight to metric or imperial
 * Created on November 11, 2018, 8:36 PM
 */

#include <iostream>
#include <cmath>

void input(float& input1, float& input2, int type, int choice);
void output(float& a, float& b, float mVal, float cVal, int type, int choice);
void kg2lbs(float& a, float& b);
void lbs2kg(float& a, float& b);
void ft2m(float& a, float& b);
void m2ft(float& a, float& b);
void redo(bool& cont);

using namespace std;

int main()
{
    bool cont = true;
    do
    {
        float input1, input2, val1, val2;
        int choice, type;
        cout << "Conversion Menu\nType 1 for Length conversion\nType 2 for Weight conversion\nInput: ";
        cin >> type;
        if(type == 1)
        {
            cout << "Type 1 for Meters to Feet\nType 2 for Feet to Meters\nInput: ";
            cin >> choice;
            if(choice == 1)
            {
                input(input1, input2, type, choice);
                val1 = input1, val2 =input2;
                m2ft(input1, input2);
                output(input1, input2, val1, val2, type, choice);

            }
            else if(choice == 2)
            {
                input(input1, input2, type, choice);
                val1 = input1, val2 =input2;
                ft2m(input1, input2);
                output(input1, input2, val1, val2, type, choice);
            }
            else
                cout << "Invalid response." << endl;

        }
        else if(type == 2)
        {
            cout << "Type 1 for Pounds to Kilograms\nType 2 for Kilograms to Pounds\nInput: ";
            cin >> choice;
            if(choice == 1)
            {
                input(input1, input2, type, choice);
                val1 = input1, val2 =input2;
                lbs2kg(input1, input2);
                output(input1, input2, val1, val2, type, choice);

            }
            else if(choice == 2)
            {
                input(input1, input2, type, choice);
                val1 = input1, val2 =input2;
                kg2lbs(input1, input2);
                output(input1, input2, val1, val2, type, choice);
            }
            else
                cout << "Invalid response." << endl;

        }
        else
            cout << "Invalid response." << endl;
        
        redo(cont);  
    }while(cont == true);
    return 0;
}

void input(float& input1, float& input2, int type, int choice)
{
    if(type == 1)
    {
        if(choice == 1)
            cout << "Input meters and centimeters to be converted to feet and inches: ";
        if(choice == 2)
            cout << "Input feet and inches to be converted to meters and centimeters: ";
    }
    if(type == 2)
    {
        if(choice == 1)
            cout << "Input pounds and ounces to be converted to kilograms and grams: ";
        if(choice == 2)
            cout << "Input kilograms and grams to be converted to pounds and ounces: ";
    }
    
    cin >> input1 >> input2;
}

void output(float& a, float& b, float mVal, float cVal, int type, int choice)
{
    if(type == 1)
    {
        if(choice == 1)
            cout << mVal <<" meters and " << cVal << " centimeters is " 
             << a << " feet and " << b << " inches." << endl;
        if(choice == 2)
            cout << mVal << " feet and " << cVal << " inches is " 
             << a << " meters and " << b << " centimeters." << endl;
    }
    if(type == 2)
    {
        if(choice == 1)
        cout << mVal <<" pounds and " << cVal << " ounces is " 
         << a << " kilograms and " << b << " grams." << endl;
        if(choice == 2)
            cout << mVal << " kilograms and " << cVal << " grams is " 
             << a << " pounds and " << b << " ounces." << endl;
    }
    
}

void kg2lbs(float& a, float& b)
{
    float temp;
    a*=1000;
    temp=a+b;
    a=floor(temp/453.592);
    b=floor(fmod(temp, 453.592)/28.35);    
}

void lbs2kg(float& a, float& b)
{
    float temp;
    a*=16;
    temp=a+b;
    a=floor((temp*28.35)/1000);
    b=floor(fmod(temp*28.35, 1000));    
}

void ft2m(float& a, float& b)
{
    float temp;
    a*=30.48;
    b*=2.54;
    temp=a+b;
    a=floor(temp/100);
    b=floor(fmod(temp, 100));    
}

void m2ft(float& a, float& b)
{
    float temp = (a*100)+b;
    temp/=2.54;
    a=floor(temp/12);
    b=floor(fmod(temp, 12));
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