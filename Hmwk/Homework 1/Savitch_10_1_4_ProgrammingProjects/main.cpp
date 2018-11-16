/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 10, 2018, 11:03 AM
 */

#include <iostream>
using namespace std;
int main()
{
    int distance, time, squared;
    int acceleration = 32;
    cout << "Press return after entering a number.\n"
            "Enter a time in seconds: ";
    cin >> time;
    
    squared=time*time;
    distance = (squared*acceleration)/2;
    
    cout << "\nAn object in free fall would travel "
            << distance
            << " feet in "
            << time
            <<" seconds in a frictionless environment.\n";
    return 0;
}