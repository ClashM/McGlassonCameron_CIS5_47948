/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Prime number list
 * Created on October 3, 2018, 1:00 PM
 */

#include <iostream>

using namespace std;


int main() 
{
    bool prime; //Boolean to define whether number is prime or not
    
    for(int num = 3; num <= 100; num++) //Loops for 3-100
    {
        for(int i = 2; i < num; i++) //Loops for 2 through 1 less than number
        {
            if(num % i == 0) //Check to see if number divides evenly
            {
                prime = false; //Number divides evenly means it is not prime
                break;         //Break out of loop
            }
            prime = true; //Number successfully made it through check
        }
        if(prime==true) //Number made it through all checks, add to output
            cout << num << ", ";
    }
    cout << "are all the prime numbers between 1 and 100.";
    return 0;
}

