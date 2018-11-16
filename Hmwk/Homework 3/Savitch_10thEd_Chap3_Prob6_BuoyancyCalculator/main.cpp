/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Buoyancy Calculator
 * Created on October 3, 2018, 2:02 PM
 */

#include <iostream>

using namespace std;



int main()
{
    float radius, weight, volume, bouyancy; //Variables for calculation and user definition
    float water = 62.4;                     //Weight of water

    //User inputs
    cout << "Check whether a sphere would float on water.\n";
    cout << "Input a weight for the sphere in pounds: ";
    cin >> weight;
    cout << "Input a radius for the sphere in feet: ";
    cin >> radius;
    
    //Calculations based on book
    volume = (4/3) * 3.14159 * (radius*radius*radius);
    bouyancy = volume * water;
    
    //Test whether it floats and output results
    if(bouyancy < weight)
        cout << "A " << weight << "lb sphere with a radius of " 
                << radius << "ft would sink.";
    if(bouyancy >= weight)
        cout << "A " << weight << "lb sphere with a radius of " 
                << radius << "ft would float.";
    
    return 0;
}

