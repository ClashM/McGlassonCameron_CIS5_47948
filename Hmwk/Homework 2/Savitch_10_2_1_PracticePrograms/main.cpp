/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 18, 2018, 3:02 PM
 */

#include <iostream>
using namespace std;

int main()
{
    float metricTonOz = 35273.92;
    float cerealOz;
    char redo;
    int state = 1;
    while(state==1)
    {
        cout << "Input the weight of your breakfast cereal box in ounces: ";
        cin >> cerealOz;
        cout << "Your cereal weighs "<<cerealOz/metricTonOz
                <<" of a metric ton.\nIt would take "<<metricTonOz/cerealOz
                <<" boxes of cereal to make one metric ton.\n";
        
        //Check for redo
        cout << "\nWould you like to run this calculation again? (Y/N): ";
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
    }
    return 0;
}

