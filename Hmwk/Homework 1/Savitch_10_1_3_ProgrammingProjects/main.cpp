/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 10, 2018, 10:56 AM
 */

#include <iostream>
using namespace std;
int main()
{
    int quarters, dimes, nickels, sum;
    cout << "Press return after entering a number.\n"
            "Enter the number of quarters: ";
    cin >> quarters;
    
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    
    quarters*=25;
    dimes*=10;
    nickels*=5;
    sum = quarters + dimes + nickels;
    
    cout << "\nThe monetary value of your change is "<< sum<<" cents.\n";
    return 0;
}

