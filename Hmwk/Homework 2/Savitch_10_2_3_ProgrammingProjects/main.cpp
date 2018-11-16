/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 11, 2018, 3:26 PM
 */

#include <iostream>
using namespace std;

int main() 
{
    double purchaseLength, purchaseTotal, discountCalc, discount, minimum, cost;
    //Prompts and inputs follow
    cout << "Setup for Carpet Calculator Program\nDecide the cost per meter of carpet: ";
    cin >> cost;
    cout << "Decide the minimum before discount applies: ";
    cin >> minimum;
    cout << "Decide the discount percentage per meter: ";
    cin >> discount;
    cout << "\nCarpets for $"<<cost<<" per meter!\n"
            "Buy more than "<<minimum<<" and save "
            <<discount<<"% on each additional meter.\n\n"
            "How many meters would you like to buy? ";
    cin >> purchaseLength;
    
    if(purchaseLength>minimum)  //Ensure there is enough for discount to apply
    {
        discountCalc=(purchaseLength-minimum)*cost;        //Find number discount applies to and its monetary value
        discountCalc*=(discount/100);                      //Discover the savings
        purchaseTotal=(purchaseLength*cost)-discountCalc;  //Subtract savings from total
        cout << "\nFor "<<purchaseLength
                <<" meters of carpet your total is $"<<purchaseTotal
                <<" and you saved $"<<discountCalc<<" today!\n";
    }
    else  //Less than the minimum for discount so perform simple calculation
    {
        purchaseTotal=purchaseLength*cost;
        cout << "\nFor "<<purchaseLength
                <<" meters of fabric your total is $"<<purchaseTotal<<"\n";
    }
    return 0;
}