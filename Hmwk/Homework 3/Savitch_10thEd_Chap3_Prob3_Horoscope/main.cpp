/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Purpose: Horoscope
 * Created on October 3, 2018, 10:19 AM
 */

#include <iostream> //cout, cin

using namespace std;


int main()
{
    bool cont, valid; //Booleans for looping
    int month, day;   //User defined month and day
    char retry;       //Input for rety choice
    //Horoscopes
    string ari = "Aries:\nYou'll have to give more than initially planned, considering what you'll gain.";
    string tau = "Taurus:\nThis person may not bring anything new to the table, but he or she still has something valuable to offer.";
    string gem = "Gemini:\nProtecting what's yours could result in you reaping half the gains. You have to give to get. Be generous, and you can expect the same. ";
    string can = "Cancer:\nNo sooner do you settle one debt then you're faced with another, but your financial outlook improves after the 22nd. ";
    string leo = "Leo:\nAn associate isn't trying to be deceptive; it's just that this person doesn't know how to break the news. ";
    string vir = "Virgo:\nMake a point of honoring all obligations -- no matter how tedious and conscientiousness now will be rewarded handsomely later. ";
    string lib = "Libra:\nYou may be penalized for breaking an agreement, but see if you can be compensated for it. ";
    string sco = "Scorpio:\nYou resent being saddled with such a heavy burden, but take it in stride. ";
    string sag = "Sagittarius:\nThe downside to collaboration is running everything you do by someone else, you'll learn a few things too. ";
    string cap = "Capricorn:\nYou need time to yourself, it's the only way to differentiate what you want from what you feel is expected.";
    string aqu = "Aquarius:\nQuit while you're ahead, bring the discussion to a close and move on.";
    string pis = "Pisces:\nSeek an older relative's advice, even if this person doesn't know exactly what you're going through.";
    string cusp = "\n\nYou are also on the cusp of ";

    cout << "Astrology Calculator\nFind your horoscope sign\n";
    
    do //Loop for retries
    {
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
                    cout << cap;            //Outputs horoscope
                    if(day>=17)             //Check if date is on cusp
                        cout << cusp << aqu;//Appends additional horoscope
                }
                else{                       //Date falls after cutoff
                    cout << aqu;            //Outputs horoscope
                    if(day<=22)             //Check if date is on cusp
                        cout << cusp << cap;//Appends additional horoscope
                }
                break;
            case 2:
                cout << "February "<<day<<", ";
                if(day<19){
                    cout << aqu;
                    if(day>=16)
                        cout << cusp << pis;
                }
                else{
                    cout << pis;
                    if(day<=21)
                        cout << cusp << aqu;
                }
                break;
            case 3:
                cout << "March "<<day<<", ";
                if(day<21){
                    cout << pis;
                    if(day>=18)
                        cout << cusp << ari;
                }
                else{
                    cout << ari;
                    if(day<=23)
                        cout << cusp << pis;
                }
                break;
            case 4:
                cout << "April "<<day<<", ";
                if(day<20){
                    cout << ari;
                    if(day>=17)
                        cout << cusp << tau;
                }
                else{
                    cout << tau;
                    if(day<=22)
                        cout << cusp << ari;
                }
                break;
            case 5:
                cout << "May "<<day<<", ";
                if(day<21){
                    cout << tau;
                    if(day>=18)
                        cout << cusp << gem;
                }
                else{
                    cout << gem;
                    if(day<=23)
                        cout << cusp << tau;
                }
                break;
            case 6:
                cout << "June "<<day<<", ";
                if(day<22){
                    cout << gem;
                    if(day>=19)
                        cout << cusp << can;
                }
                else{
                    cout << can;
                    if(day<=24)
                        cout << cusp << gem;
                }
                break;
            case 7:
                cout << "July "<<day<<", ";
                if(day<23){
                    cout << can;
                    if(day>=20)
                        cout << cusp << leo;
                }
                else{
                    cout << leo;
                    if(day<=25)
                        cout << cusp << can;
                }
                break;
            case 8:
                cout << "August "<<day<<", ";
                if(day<23){
                    cout << leo;
                    if(day>=20)
                        cout << cusp << vir;
                }
                else{
                    cout << vir;
                    if(day<=25)
                        cout << cusp << leo;
                }
                break;
            case 9:
                cout << "September "<<day<<", ";
                if(day<23){
                    cout << vir;
                    if(day>=20)
                        cout << cusp << lib;
                }
                else{
                    cout << lib;
                    if(day<=25)
                        cout << cusp << vir;
                }
                break;
            case 10:
                cout << "October "<<day<<", ";
                if(day<22){
                    cout << lib;
                    if(day>=19)
                        cout << cusp << sco;
                }
                else{
                    cout << sco;
                    if(day<=24)
                        cout << cusp << lib;
                }
                break;
            case 11:
                cout << "November "<<day<<", ";
                if(day<22){
                    cout << sco;
                    if(day>=19)
                        cout << cusp << sag;
                }
                else{
                    cout << sag;
                    if(day<=24)
                        cout << cusp << sco;
                }
                break;
            case 12:
                cout << "December "<<day<<", ";
                if(day<22){
                    cout << sag;
                    if(day>=19)
                        cout << cusp << cap;
                }
                else{
                    cout << cap;
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