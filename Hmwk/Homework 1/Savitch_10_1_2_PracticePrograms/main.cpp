/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 10, 2018, 9:50 AM
 */

#include <iostream>
using namespace std;
int main()
{
    int favoriteNum;
    cout << "Press return after entering a number.\n"
            << "Please enter your favorite number:\n";
    cin >> favoriteNum;
    
    cout << "\nYour favorite number is "<<favoriteNum<<".\n";
    return 0;
}