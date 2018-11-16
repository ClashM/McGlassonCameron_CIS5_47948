/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 10, 2018, 10:34 AM
 */

#include <iostream>
using namespace std;
int main()
{
    int number1, number2, sum, product;
    cout << "Press return after entering a number.\nEnter a number: ";
    cin >> number1;
    
    cout << "Enter another number: ";
    cin >> number2;
    
    sum = number1 + number2;
    product = number1 * number2;
    
    cout << "\nThe sum of "
            << number1<<" and "<<number2
            <<" is "<<sum
            <<".\nThe product of "
            <<number1<<" and "<<number2
            <<" is "<<product<<".\n";
    return 0;
}