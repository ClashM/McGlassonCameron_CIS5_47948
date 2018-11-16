/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Taxi Fare Calculator
 * Created on October 4, 2018, 12:52 PM
 */

#include <iostream>

using namespace std;



int main()
{
    float total=3.2;        //Total starts with fixed charge
    //Variables for later definition
    float duration, dist, startTime, chargeCalc;
    bool surcharge;

    //Prompts and user inputs
    cout << "Taxi Fare Calculator\nInput the duration of journey in minutes: ";
    cin >> duration;
    cout << "Input distance traveled in KM: ";
    cin >> dist;
    cout << "Input the trip start time in 24hr format (i.e. 2300 for 11pm): ";
    cin >> startTime;
    
    //Calculations
    dist*=2.05;             //Fee per km
    duration*=0.95;         //Fee per min
    total+=dist+duration;   //Add to running total
    //Check whether surcharge applies
    if(startTime<=0600 || startTime>=2300)
    {
        chargeCalc=total*0.15;
        total+=chargeCalc;
        surcharge=true;
    }
         
    //Outputs
    cout << "Your fare is $" << total << " including:\n"
            << "$" << dist << " for distance traveled\n"
            << "$" << duration << " for time in transit";
    if(surcharge) //If surcharge applied append additional fee notification
        cout << "\nAnd a 15% surcharge of $" << chargeCalc << " for a trip between 11pm and 6am";           

    return 0;
}

