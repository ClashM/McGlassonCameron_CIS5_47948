/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Arrange Values Greatest to Smallest
 * Created on November 8, 2018, 11:22 AM
 */

#include <iostream>

using namespace std;

void lrg2sml(int& a, int& b, int& c);
void swapVal(int& variable1, int& variable2);

int main()
{
    int val1, val2, val3;
    cout << "Input three numbers: ";
    cin >> val1 >> val2 >> val3;
    lrg2sml(val1, val2, val3);
    return 0;
}

void lrg2sml(int& a, int& b, int& c)
{
    cout << "You chose: " << a << ", " << b << ", " << c << endl;
    if(c>a)
        swapVal(c, a);
    if(c>b)
        swapVal(c, b);
    if(b>a)
        swapVal(a, b);     
    cout << "From largest to smallest: " << a << ", " << b << ", " << c << endl;
    return;
}
void swapVal(int& variable1, int& variable2)
{
    int temp;
    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}