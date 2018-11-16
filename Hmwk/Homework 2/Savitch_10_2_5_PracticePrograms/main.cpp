/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 18, 2018, 4:00 PM
 */

#include <iostream>
using namespace std;

int main()
{
    double radius, volume;
    cout << "Enter radius of a sphere." << endl;
    cin >> radius;
    
    volume = (4.0 / 3.0) * 3.1415 * radius * radius * radius;
    
    cout << " The volume is " << volume << endl;
    
    return 0;
}