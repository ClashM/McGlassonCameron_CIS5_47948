/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 10, 2018, 12:09 PM
 */

#include <iostream>
using namespace std;

int main() 
{
    float milBdgt,fedBdgt,mlPrcnt;
        milBdgt=7.0e11f;    //Military Budget = 700 Billion   
        fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion
        mlPrcnt = (milBdgt/fedBdgt)*100; //Percentage Calculation
        cout << "\nThe military budget is "<<mlPrcnt<<"% of the federal budget.\n";
    return 0;
}