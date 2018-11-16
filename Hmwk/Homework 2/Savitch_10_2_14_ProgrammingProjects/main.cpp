/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 18, 2018, 2:14 PM
 */

#include <iostream>

using namespace std;

int main() 
{
    //Variables
    int hour, minute, second;
    
    do
    {
        cout << "Enter the hour of the day (0-23): ";
        cin >> hour;
    }while(hour < 0 || hour > 23);
    do
    {
        cout << "Enter the minute of the hour (0-59): ";
        cin >> minute;
    }while(minute < 0 || minute > 59);
    do
    {
        cout << "Enter the seconds passed in the current minute (0-59): ";
        cin >> second;
    }while(second < 0 || second > 59);
  
    //Calculate and output
    cout << "\nThe time in seconds since midnight is: " 
            << ((hour*3600)+(minute*60)+(second));
    return 0;
}