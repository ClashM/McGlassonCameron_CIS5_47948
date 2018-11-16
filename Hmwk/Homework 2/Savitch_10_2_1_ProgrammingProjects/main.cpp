/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 11, 2018, 2:42 PM
 */

#include <iostream>
using namespace std;

int main() 
{
    double purchaseLength, purchaseTotal, discountCalc;
    //Prompts and inputs follow
    cout << "Carpets for $2.75 per meter!\n"
            "Buy more than 10 and save 15% on each additional meter.\n\n"
            "How many meters would you like to buy? ";
    cin >> purchaseLength;
    
    if(purchaseLength>10) //Ensure there is enough for discount to apply
    {
        discountCalc=(purchaseLength-10)*2.75;               //Find number discount applies to and its monetary value
        discountCalc*=0.15;                                  //Discover the savings
        purchaseTotal=(purchaseLength*2.75)-discountCalc;    //Subtract savings from total
        cout << "\nFor "<<purchaseLength
                <<" meters of carpet your total is $"<<purchaseTotal
                <<" and you saved $"<<discountCalc<<" today!\n";
    }
    else    //Less than the minimum for discount so perform simple calculation
    {
        purchaseTotal=purchaseLength*2.75;
        cout << "\nFor "<<purchaseLength
                <<" meters of fabric your total is $"<<purchaseTotal<<"\n";
    }
    return 0;
}