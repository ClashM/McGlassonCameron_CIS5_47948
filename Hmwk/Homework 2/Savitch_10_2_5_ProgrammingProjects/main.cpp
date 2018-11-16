/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 11, 2018, 6:24 PM
 */

#include <iostream>
using namespace std;

int main()
{
    //Variables
    int capacity, occupancy;
    char redo;
    
    //Prompts and inputs
    cout << "Fire law safety check.\n"
         << "Enter room capacity: ";
    cin >> capacity;
    cout << "Enter current number in room: ";
    cin >> occupancy;
    
    //Check
    if(capacity>=occupancy)
        cout << "You're within the legal limit.\n";
    else
        cout << "There are too many people. " 
             << (occupancy-capacity)
             << " will need to leave in accordance with fire safety laws.\n";
    
    //Ask for repeat
    cout << "\nWould you like to check again? Y/N: ";
    cin >> redo;
    if(redo == 'N' || redo == 'n')
        return 0;
    else
        return main(); //Return main for non-loop repeat
}

