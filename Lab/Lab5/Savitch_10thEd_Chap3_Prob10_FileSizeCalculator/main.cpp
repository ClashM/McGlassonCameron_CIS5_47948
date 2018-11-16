/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: File Size Calculator
 * Created on October 3, 2018, 2:55 PM
 */

#include <iostream> //cin, cout

using namespace std;


int main() 
{
    int size; //User defined integer for file size
    char unit;//User defined character for unit size
    //User inputs
    cout << "Enter the numerical size of a file: ";
    cin >> size;
    cout << "Enter the unit as either G(Gigabyte), M(Megabyte), or K (Kilobyte): ";
    cin >> unit;
    
    //Switch determines which units to output based on user inputs
    switch(unit)
    {
        int mb, kb, b; //Integers to hold numbers after calculations
        case 'G':
        case 'g':
            mb=size*1024;
            kb=size*1024*1024;
            b=size*1024*1024*1024;
            cout << size << " Gigabytes is:\n" 
                    << mb << " Megabytes\n" 
                    <<kb << " Kilobytes\n"
                    << b << " Bytes";
            break;
        case 'M':
        case 'm':
            kb=size*1024;
            b=size*1024*1024;
            cout << size << " Megabytes is:\n" 
                    <<kb << " Kilobytes\n"
                    << b << " Bytes";
            break;
        case 'K':
        case 'k':
            b=size*1024*1024;
            cout << size << " Kilobytes is "
                    << b << " Bytes";
            break;
        default:
            break;
    }
    return 0;
}

