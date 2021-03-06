/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 10, 2018, 10:26 AM
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
    
    sum = number1 / number2;
    cout << "\nThe quotient of ";
    cout << number1;
    cout << " and ";
    cout << number2;
    cout << " is ";
    cout << sum;
    cout <<".\n";
    return 0;
}
/*
 *  Dividing by 0 gets a RUN FAILED error. Dividing by a number that is larger
 * than the first always returns 0 since integers can't hold decimals. Changing
 * the variables to double fixes this.
*/