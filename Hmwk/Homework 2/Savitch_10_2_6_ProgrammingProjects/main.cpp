/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 11, 2018, 6:51 PM
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "Weekly income breakdown calculator.\n";
    
    bool state = 1;
    do //Do-While loop and state determines whether to run again
    {
        float hourly = 16.78; //Hourly pay
        float dues = 10; //Union dues
        float socialTax = .06; //Social Security tax percentage
        float federalTax = .14; //Federal tax percentage
        float stateTax = 0.05; //State tax percentage
        char redo;
        float gross, takeHome, hours, overHours, dependents; //Variables
        cout << "Type in the number of hours worked: ";
        cin >> hours;
        cout << "Type in the number of dependents: ";
        cin >> dependents; 
        if(hours >= 40) //Calculate overtime
        {
            overHours=hours-40;
            int calc=overHours*(hourly*1.5);
            gross=(hourly*40)+calc;
        }
        else
            gross=hourly*hours;

        //Calculations
        socialTax*=gross; //How much SS Tax is due
        federalTax*=gross; //How much F Tax is due
        stateTax*=gross; //How much S Tax is due
        takeHome=((((gross-socialTax)-federalTax)-stateTax)-dues); //Subtract taxes from gross
        if(dependents >= 3) //3 or more dependents triggers an additional constant fee of $35
            takeHome-=35;

        //Outputs
        cout << "\nYou make $"<<hourly<<" per hour."
             <<"\nThis week your gross income was $" << gross << " including " 
             << overHours << " hours of overtime for which you were paid time and half.\n"
             << "After paying:\nSocial Security: $" << socialTax
             << "\nFederal Income Tax: $" << federalTax
             <<  "\nState Income Tax: $" << stateTax
             << "\nUnion dues: $" << dues;
        if(dependents >= 3)
            cout << "\nDependent Healthcare: $35";
        cout << "\nYour take home pay was $" << takeHome << ".\n";

        //Check for rerun
        cout << "\nWould you like to run this calculator again? Y/N: ";
        cin >> redo;
        if(redo == 'N' || redo == 'n')
            state=0;
        else if(redo == 'Y' || redo == 'y')
            state=1;
        else
        {
            cout << "\nEntry not within scope. Shutting down.\n";
            state=0;
        }
    } while(state==1);
        return 0;
}