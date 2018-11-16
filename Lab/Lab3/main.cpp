/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 25, 2018, 10:25 AM
 */

#include <iostream> //cout, cin, fixed
#include <iomanip> //precision

using namespace std;

float cost;
float taxTotal;
float oilPercent;
float taxPercent;
float federalTax=.184;
float salesTax=0.08;
float profit=.065;
float exciseTax=.39;
float capTrade=.10;

int main()
{
    //Introductory prompt and input
    cout << "Input the cost per gallon last time you bought gas for a cost analysis: $";
    cin >> cost;
    
    //Calculations
    salesTax*=cost;
    profit*=cost;
    taxTotal=federalTax+salesTax+exciseTax+capTrade;
    taxPercent=(taxTotal/cost)*100;
    oilPercent=(profit/cost)*100;
            
    //Output
    cout << setprecision(2)<<fixed
            <<"You paid $"<<cost<<" per gallon which included:\n"
            <<"Excise tax: $"<<exciseTax
            <<"\nSales Tax: $"<<salesTax
            <<"\nCap & Trade Tax: $"<<capTrade
            <<"\nFederal Excise Tax: $"<<federalTax
            <<"\nA total of $"<<taxTotal<<" per gallon went to taxes which is "<<taxPercent<<"% of the cost.\nThe oil company made $"
            <<profit<<" in profit per gallon or "<<oilPercent<<"% of the cost.";
            
    return 0;
}

