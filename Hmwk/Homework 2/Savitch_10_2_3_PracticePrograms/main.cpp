/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 18, 2018, 4:06 PM
 */

#include <iostream>
using namespace std;

int main()
{
    double milesPH, minPM, secPM;
    
    cout << "Input a speed in miles per hour to get the pace: ";
    cin >> milesPH;
    
    minPM=static_cast<int>(60/milesPH);
    secPM=static_cast<int>(60*((60/milesPH)-minPM));
    
    cout << "At " << milesPH << "mph you're traveling 1 mile every "
            << minPM << " minutes and "
            << secPM << " seconds.";
    return 0;
}