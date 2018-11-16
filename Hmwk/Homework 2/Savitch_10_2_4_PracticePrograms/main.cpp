/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 18, 2018, 3:17 PM
 */

#include <iostream>

using namespace std;

int main()
{
    char answ;
    cout << "Hello user!\n";
    do
    {
        cout << "Are you having a good day? (y/n): ";
        cin >> answ;
    } while(answ!='n' && answ!='y');
    if(answ == 'n')
        cout << "I hope your day gets better soon.";
    if(answ == 'y')
        cout << "I'm glad to hear that.";
    return 0;
}

