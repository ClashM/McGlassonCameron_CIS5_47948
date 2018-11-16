/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 10, 2018, 10:15 AM
 */

#include <iostream>
using namespace std;
int main()
{
    int number1, number2, sum;
    cout << "Press return after entering a number.\nEnter a number: ";
    cin >> number1;
    
    cout << "Enter another number: ";
    cin >> number2;
    
    sum = number1 - number2;
    cout << "\nThe difference of ";
    cout << number1;
    cout << " and ";
    cout << number2;
    cout << " is ";
    cout << sum;
    cout <<".\n";
    return 0;
}

/*
 * When subtracting a negative number the output works as expected by 
 * adding the integers. When using a very large number it automatically sets 
 * the second integer to 0 and sets the first to 2147483647 which is the 
 * maximum value for a 32bit binary integer.
 */