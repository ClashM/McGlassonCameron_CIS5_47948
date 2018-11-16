/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Horoscopes
 * Created on October 3, 2018, 12:40 PM
 */

#include <iostream> //cout, cin

using namespace std;


int main()
{
    
    bool cont, valid; //Booleans for looping
    int month, day;   //User defined month and day
    char retry;       //Input for rety choice
    //Horoscopes
    string ari = "Aries:\nYou'll have to give more than initially planned, considering what you'll gain.\n";
    string tau = "Taurus:\nThis person may not bring anything new to the table, but he or she still has something valuable to offer.\n";
    string gem = "Gemini:\nProtecting what's yours could result in you reaping half the gains. You have to give to get. Be generous, and you can expect the same.\n";
    string can = "Cancer:\nNo sooner do you settle one debt then you're faced with another, but your financial outlook improves after the 22nd.\n";
    string leo = "Leo:\nAn associate isn't trying to be deceptive; it's just that this person doesn't know how to break the news.\n";
    string vir = "Virgo:\nMake a point of honoring all obligations -- no matter how tedious and conscientiousness now will be rewarded handsomely later.\n";
    string lib = "Libra:\nYou may be penalized for breaking an agreement, but see if you can be compensated for it.\n";
    string sco = "Scorpio:\nYou resent being saddled with such a heavy burden, but take it in stride.\n";
    string sag = "Sagittarius:\nThe downside to collaboration is running everything you do by someone else, you'll learn a few things too.\n";
    string cap = "Capricorn:\nYou need time to yourself, it's the only way to differentiate what you want from what you feel is expected.\n";
    string aqu = "Aquarius:\nQuit while you're ahead, bring the discussion to a close and move on.\n";
    string pis = "Pisces:\nSeek an older relative's advice, even if this person doesn't know exactly what you're going through.\n";
    string cusp = "\nYou are also on the cusp of ";
    //Elements
    string fire = "You are a FIRE sign. You are most comfortable among those who are also fire signs: ARIES, LEO, and SAGITTARIUS.\n";
    string earth = "You are an EARTH sign. You are most comfortable among those who are also earth signs: TAURUS. VIRGO, and CAPRICORN.\n";
    string air = "You are an AIR sign. You are most comfortable among those who are also air signs: GEMINI, LIBRA, AQUARIUS.\n";
    string water = "You are a WATER sign. You are most comfortable among those who are also water signs: CANCER, SCORPIO, and PISCES.\n";

    cout << "Astrology Calculator\nFind your horoscope sign\n";
    
    do //Loop for retries
    {
        int month, day;   //User defined month and day
        char retry;       //Input for rety choice
        
        while(month<1 || month>12)
        {
            cout << "Input your birth month (1-12): ";
            cin >> month;
        }
        while(day<1 || day>31)
        {
            cout << "Input your birth day (1-31): ";
            cin >> day;
        }
        
        switch(month) //Switch cases for month determine astro sign
        {
            case 1:                         //Cases 1-12 for each month
                cout << "January "<<day<<", ";
                if(day<20){                 //Check if date is before cutoff
                    cout << cap << earth;   //Outputs horoscope and element
                    if(day>=17)             //Check if date is on cusp
                        cout << cusp << aqu;//Appends additional horoscope
                }
                else{                       //Date falls after cutoff
                    cout << aqu << air;     //Outputs horoscope and element
                    if(day<=22)             //Check if date is on cusp
                        cout << cusp << cap;//Appends additional horoscope
                }
                break;
            case 2:
                cout << "February "<<day<<", ";
                if(day<19){
                    cout << aqu << air;
                    if(day>=16)
                        cout << cusp << pis;
                }
                else{
                    cout << pis << water;
                    if(day<=21)
                        cout << cusp << aqu;
                }
                break;
            case 3:
                cout << "March "<<day<<", ";
                if(day<21){
                    cout << pis << water;
                    if(day>=18)
                        cout << cusp << ari;
                }
                else{
                    cout << ari << fire;
                    if(day<=23)
                        cout << cusp << pis;
                }
                break;
            case 4:
                cout << "April "<<day<<", ";
                if(day<20){
                    cout << ari << fire;
                    if(day>=17)
                        cout << cusp << tau;
                }
                else{
                    cout << tau << earth;
                    if(day<=22)
                        cout << cusp << ari;
                }
                break;
            case 5:
                cout << "May "<<day<<", ";
                if(day<21){
                    cout << tau << earth;
                    if(day>=18)
                        cout << cusp << gem;
                }
                else{
                    cout << gem << air;
                    if(day<=23)
                        cout << cusp << tau;
                }
                break;
            case 6:
                cout << "June "<<day<<", ";
                if(day<22){
                    cout << gem << air;
                    if(day>=19)
                        cout << cusp << can;
                }
                else{
                    cout << can << water;
                    if(day<=24)
                        cout << cusp << gem;
                }
                break;
            case 7:
                cout << "July "<<day<<", ";
                if(day<23){
                    cout << can << water;
                    if(day>=20)
                        cout << cusp << leo;
                }
                else{
                    cout << leo << fire;
                    if(day<=25)
                        cout << cusp << can;
                }
                break;
            case 8:
                cout << "August "<<day<<", ";
                if(day<23){
                    cout << leo << fire;
                    if(day>=20)
                        cout << cusp << vir;
                }
                else{
                    cout << vir << earth;
                    if(day<=25)
                        cout << cusp << leo;
                }
                break;
            case 9:
                cout << "September "<<day<<", ";
                if(day<23){
                    cout << vir << earth;
                    if(day>=20)
                        cout << cusp << lib;
                }
                else{
                    cout << lib << air;
                    if(day<=25)
                        cout << cusp << vir;
                }
                break;
            case 10:
                cout << "October "<<day<<", ";
                if(day<22){
                    cout << lib << air;
                    if(day>=19)
                        cout << cusp << sco;
                }
                else{
                    cout << sco << water;
                    if(day<=24)
                        cout << cusp << lib;
                }
                break;
            case 11:
                cout << "November "<<day<<", ";
                if(day<22){
                    cout << sco << water;
                    if(day>=19)
                        cout << cusp << sag;
                }
                else{
                    cout << sag << fire;
                    if(day<=24)
                        cout << cusp << sco;
                }
                break;
            case 12:
                cout << "December "<<day<<", ";
                if(day<22){
                    cout << sag << fire;
                    if(day>=19)
                        cout << cusp << cap;
                }
                else{
                    cout << cap << earth;
                    if(day<=24)
                        cout << cusp << sag;
                }
                break;
            default:
                break;
        }
        
        //Asks if user would like to retry
        cout << "\n\n"; //Double line break for easier reading
        do{
            valid=false;
            cout << "Would you like to check another date? Y/N: ";
            cin >> retry;
            switch(retry)
            {
                case 'Y':
                case 'y':
                    valid=true;
                    cont=true;
                    month=0;
                    day=0;
                    break;
                case 'N':
                case 'n':
                    valid=true;
                    cont=false;
                    break;
                default:
                    valid=false;
                    break;
            }
        }while(valid==false);
        
    }while (cont==true);
    
    return 0;
}