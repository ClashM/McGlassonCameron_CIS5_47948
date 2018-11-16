/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 * Created on October 8, 2018, 3:27 PM
 * Modification of...
 */
/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 4th, 2018, 10:25 AM
 * Purpose:  Menu Template
 */


//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions



//Function Prototypes Here

rockPaperScissors()
{
    char player1, player2, retry;   //User defined variables
    bool cont, valid;               //Boolean expressions for loop escapes
    cout << "Rock Paper Scissors\nInput either R, P, or S to play.\n";
    do //Loop for repeating program
    {
        do //Loop for ensuring valid response from player 1
        {
            valid=false;
            cout << "Player 1: ";
            cin >> player1;
            switch(player1)
            {
                case 'R':
                case 'r':
                    player1='R';
                    valid=true;
                    break;
                case 'P':
                case 'p':
                    player1='P';
                    valid=true;
                    break;
                case 'S':
                case 's':
                    player1='S';
                    valid=true;
                    break;
                default:
                    cout << "Try again ";
                    break;
            }
        }while(valid==false);
        
        //Compares characters after player 2 makes decision
        do //Loop for ensuring valid response from player 2
        {
            valid=false;
            cout << "Player 2: ";
            cin >> player2;
            switch(player2)
            {
                case 'R':
                case 'r':
                    valid=true;
                    if(player1=='R')
                        cout << "Tie game!";
                    if(player1=='P')
                        cout << "Paper covers rock! Player 1 wins!";
                    if(player1=='S')
                        cout << "Rock crushes scissors! Player 2 wins!";
                    break;
                case 'P':
                case 'p':
                    valid=true;
                    if(player1=='R')
                        cout << "Paper covers rock! Player 2 wins!";
                    if(player1=='P')
                        cout << "Tie game!";
                    if(player1=='S')
                        cout << "Scissors cut paper! Player 1 wins!";
                    break;
                case 'S':
                case 's':
                    valid=true;
                    if(player1=='R')
                        cout << "Rock crushes scissors! Player 1 wins!";
                    if(player1=='P')
                        cout << "Scissors cut paper! Player 2 wins!";
                    if(player1=='S')
                        cout << "Tie game!";
                    break;
                default:
                    cout << "Try again ";
                    break;
            }
        }while(valid==false);
        
        //Asks whether to repeat program or end it
        cout << "\nWould you like to try again? Y/N: ";
        cin >> retry;
        switch(retry)
        {
            case 'Y':
            case 'y':
                cont=true;
                break;
            case 'N':
            case 'n':
                cont=false;
                break;
            default:
                cout << "Invalid response, ending...";
                break;
        }
    } while(cont == true);
}

revolvingCredit()
{
    bool cont; //Boolean to determine whether to repeat program
    char retry; //Char for repeat prompt
    float balance, minimum, interest, total; //User defined balance and variables for calculation
    
    cout << "Revolving Credit Account Calculation\n";
    do{ //Loop for repeating calculation
        //User input
        cout << "Input account balance: ";
        cin >> balance;
        
        //Interest calculation
        if(balance<=1000)
            interest=0.015*balance; //Interest of 1.5% on first thousand
        if(balance>1000)
        {
            interest+=15; //Interest of 1.5% on first 1000
            interest+=(balance-1000)*0.01; //Interest of 1% on everything over 1000
        }
        total=balance+interest;
        
        //Minimum payment calculation
        if(total<=10) //Total is less than cutoff, minimum payment set to match
            minimum = total; 
        if(total>10)  //Total is greater than cutoff
        {
            if((total*0.1)>10) //Check whether 10% or $10 is more then set minimum payment
                minimum = total*0.1;
            else
                minimum = 10;
        }
        
        //Outputs
        cout << "Your total due is $" << total
                << "\nYour minimum payment is $" << minimum
                << "\nYour interest is $" << interest << "\n";
        
        //Prompt to repeat program
        do{
            cout << "Would you like to run this calculation again? (Y/N): ";
            cin >> retry;
        }while(retry!='Y'&&retry!='y'&&retry!='N'&&retry!='n');
        switch(retry)
        {
            case 'Y':
            case 'y':
                cont=true;
                break;
            case 'N':
            case 'n':
                cont=false;
                break;
        }
        
    }while(cont==true);
}
     
astrology()
{
    bool cont, valid; //Booleans for looping
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
        int month=0, day=0;   //User defined month and day
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
}

astrologySigns()
{
	bool cont, valid; //Booleans for looping
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
        int month=0, day=0;   //User defined month and day
        
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
}

primesList() 
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
}

sphereBuoyancy()
{
	float radius, weight, volume, buoyancy; //Variables for calculation and user definition
	float water = 62.4;                     //Weight of water

    //User inputs
    cout << "Check whether a sphere would float on water.\n";
    cout << "Input a weight for the sphere in pounds: ";
    cin >> weight;
    cout << "Input a radius for the sphere in feet: ";
    cin >> radius;
    
    //Calculations based on book
    volume = (4/3) * 3.14159 * (radius*radius*radius);
    buoyancy = volume * water;
    
    //Test whether it floats and output results
    if(buoyancy < weight)
        cout << "A " << weight << "lb sphere with a radius of " 
                << radius << "ft would sink.";
    if(buoyancy >= weight)
        cout << "A " << weight << "lb sphere with a radius of " 
                << radius << "ft would float.";
}

taxiFare()
{
    float total=3.2;        //Total starts with fixed charge added
    //Variables for later definition
    float duration, dist, startTime, chargeCalc;
    bool surcharge;

    //Prompts and user inputs
    cout << "Taxi Fare Calculator\nInput the duration of journey in minutes: ";
    cin >> duration;
    cout << "Input distance traveled in KM: ";
    cin >> dist;
    cout << "Input the trip start time in 24hr format (i.e. 2300 for 11pm): ";
    cin >> startTime;
    
    //Calculations
    dist*=2.05;             //Fee per km
    duration*=0.95;         //Fee per min
    total+=dist+duration;   //Add to running total
    //Check whether surcharge applies
    if(startTime<=0600 || startTime>=2300)
    {
        chargeCalc=total*0.15;
        total+=chargeCalc;
        surcharge=true;
    }
         
    //Outputs
    cout << "Your fare is $" << total << " including:\n"
            << "$" << dist << " for distance traveled\n"
            << "$" << duration << " for time in transit";
    if(surcharge) //If surcharge applied append additional fee notification
        cout << "\nAnd a 15% surcharge of $" << chargeCalc << " for a trip between 11pm and 6am";
}

romanNumeral()
{
    char retry;
    bool cont, valid;
    string roman;
    
    do
    {
        int thousands, hundreds, tens, ones; //Variables for places
        int year; //User defined year
        do //Prompt for year until one is valid
        {
            cout << "Input a year between 1000 and 3000 to get it in Roman Numerals: ";
            cin >> year;
        }while(year<1000 || year>3000);

        //Break year into places for thousamds, hundreds, tens, and ones
        thousands=year/1000;
        hundreds=(year%1000)/100;
        tens=(year%100)/10;
        ones=year%10;
        
        //Add M for every thousand
        for(int i = 0; i < thousands; i++)
            roman += 'M';

        //Add appropriate hundreds numerals
        switch(hundreds)
        {
            case 0:
                break;
            case 9:
                roman += "CM";
                break;
            case 8:
                roman += "DCCC";
                break;
            case 7:
                roman += "DCC";
                break;
            case 6:
                roman += "DC";
                break;
            case 5:
                roman += "D";
                break;
            case 4:
                roman += "CD";
                break;
            case 3:
                roman += "CCC";
                break;
            case 2:
                roman += "CC";
                break;
            case 1:
                roman += "C";
                break;    
        }
        
        //Add appropriate tens numerals
        switch(tens)
        {
            case 0:
                break;
            case 9:
                roman += "XC";
                break;
            case 8:
                roman += "LXXX";
                break;
            case 7:
                roman += "LXX";
                break;
            case 6:
                roman += "LX";
                break;
            case 5:
                roman += "L";
                break;
            case 4:
                roman += "XL";
                break;
            case 3:
                roman += "XXX";
                break;
            case 2:
                roman += "XX";
                break;
            case 1:
                roman += "X";
                break;    
        }

        //Add appropriate ones numerals
        switch(ones)
        {
            case 0:
                break;
            case 9:
                roman += "IX";
                break;
            case 8:
                roman += "VIII";
                break;
            case 7:
                roman += "VII";
                break;
            case 6:
                roman += "VI";
                break;
            case 5:
                roman += "V";
                break;
            case 4:
                roman += "IV";
                break;
            case 3:
                roman += "III";
                break;
            case 2:
                roman += "II";
                break;
            case 1:
                roman += "I";
                break;    
        }
        
        //Output
        cout << "The year " << year << " is " << roman << " in Roman numerals.\n";
                
        //Prompt for repeat
        do{
            valid=false;
            cout << "Would you like to run this calculation again? Y/N: ";
            cin >> retry;
            switch(retry)
            {
                case 'Y':
                case 'y':
                    valid=true;
                    cont=true;
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
    }while(cont==true);
}

blackJack()
{
    bool cont, valid; //Booleans for loop breaks
    cout << "Blackjack Hand Counter\n"
            << "Input card face values from A, 2-9, T for ten, and J, Q, K\n";
    do //Loop for retry
    {
        char retry; //Retry input
        //Card data zeroed out to clear on retries
        int count, total=0;
        bool aceCount=false; //Whether an ace is counted among the cards
        
        //User input for card number
        do
        {
            cout << "How many cards do you have: ";
            cin >> count;
        }while(count<1 || count>5);
        
        //For loop cycles through cards for inputs
        for(int i=1; i<=count; i++)
        {
            char card;   //User input as char value
            valid=false; //Boolean checking whether response is valid
            
            //Loop until valid input is detected
            do
            {
                cout << "Input the value of card #" << i << ": ";
                cin >> card;
                switch(card) //Takes card value, checks whether it's valid, assigns numerical value
                {
                    case '2':       //Card char value
                        total+=2;  //Assigns numerical value
                        valid=true; //Declares valid scope
                        break;      //Breaks switch statement
                    case '3':
                        total+=3;
                        valid=true;
                        break;
                    case '4':
                        total+=4;
                        valid=true;
                        break;
                    case '5':
                        total+=5;
                        valid=true;
                        break;
                    case '6':
                        total+=6;
                        valid=true;
                        break;
                    case '7':
                        total+=7;
                        valid=true;
                        break;
                    case '8':
                        total+=8;
                        valid=true;
                        break;
                    case '9':
                        total+=9;
                        valid=true;
                        break;
                    case 't':
                    case 'T':
                    case 'j':
                    case 'J':
                    case 'q':
                    case 'Q':
                    case 'k':
                    case 'K':
                        total+=10;
                        valid=true;
                        break;
                    case 'a':
                    case 'A':
                        total+=1;
                        aceCount=true; //Declares an ace is in the hand
                        valid=true;
                        break;
                    default: //Not defined in scope so not valid
                        valid=false;
                        break;
                }
            }while(valid==false);            
        }
        
        //If aces are detected and total is low enough to raise, do so
        if(aceCount&&total<=11)
            total+=10;  //Aces already counted as 1 so just add 10 to raise              
        
        //Outputs
        if(total<=21)
            cout << "Your card total is "<<total<<"\n";
        else
            cout << "Busted\n";
        
        //Loop for repeating program
        do{
            valid=false;
            cout << "Would you like to run this calculation again? (Y/N): ";
            cin >> retry;
            switch(retry)
            {
                case 'Y':
                case 'y':
                    valid=true;
                    cont=true;
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

    }while(cont==true);
}

dataConversion() 
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
            kb=size*1048576;    //1024 squared
            b=size*1073741824;  //1024 cubed
            cout << size << " Gigabytes is:\n" 
                    << mb << " Megabytes\n" 
                    <<kb << " Kilobytes\n"
                    << b << " Bytes";
            break;
        case 'M':
        case 'm':
            kb=size*1024;
            b=size*1048576;
            cout << size << " Megabytes is:\n" 
                    <<kb << " Kilobytes\n"
                    << b << " Bytes";
            break;
        case 'K':
        case 'k':
            b=size*1048576;
            cout << size << " Kilobytes is "
                    << b << " Bytes";
            break;
        default:
            break;
    }
}

//Program Execution Begins Here
int main() {
    //Declare all Variables Here
    
    char choice;//Option 0 to 9 input as a character not a numeric value
    
    //Input or initialize values Here
    cout<<"This program illustrates a Menu"<<endl;
    cout<<"Choose the problem you wish to solve"<<endl;
    cout<<"0 -> Savitch_10thEd_Chap3_Practice1_RockPaperScissors"<<endl;
    cout<<"1 -> Savitch_10thEd_Chap3_Practice2_RevolvingCredit"<<endl;
    cout<<"2 -> Savitch_10thEd_Chap3_Practice3_Astrology"<<endl;
    cout<<"3 -> Savitch_10thEd_Chap3_Practice4_Astrology/Signs"<<endl;
    cout<<"4 -> Savitch_10thEd_Chap3_Practice5_PrimesList"<<endl;
    cout<<"5 -> Savitch_10thEd_Chap3_Practice6_SphereBuoyancy"<<endl;
    cout<<"6 -> Savitch_10thEd_Chap3_Practice7_TaxiFare"<<endl;
    cout<<"7 -> Savitch_10thEd_Chap3_Project3_RomanNumerals"<<endl;
    cout<<"8 -> Savitch_10thEd_Chap3_Project4_BlackJack"<<endl;
    cout<<"9 -> Savitch_10thEd_Chap3_Project10_DataConversion"<<endl;
    cout<<"Please make a selection: ";
    cin>>choice;
    
    //Process/Calculations Here
    switch(choice){
        case '0':
            rockPaperScissors();
            break;
        case '1':
            revolvingCredit();
            break;
        case '2':
            astrology();
            break;
        case '3':
            astrologySigns();
            break;
        case '4':
            primesList();
            break;
        case '5':
            sphereBuoyancy();
            break;
        case '6':
            taxiFare();
            break;
        case '7':
            romanNumeral();
            break;
        case '8':
            blackJack();
            break;
        case '9':
            dataConversion();
            break;
        default:
            cout<<"Having trouble following instructions?"<<endl;
    }
    
    //Exit Stage Right
    return 0;
}