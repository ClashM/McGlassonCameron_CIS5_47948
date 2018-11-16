/* 
 * File:   main.cpp
 * Author: Cameron McGlasson
 *
 * Created on September 11, 2018, 10:17 AM
 */

#include <iostream>
using namespace std;

int main()
{
    string input;
    char gender;
    cout << "What kind of haircut should you get?\n"
            "Answer these questions and find out.\n"
            "Press return after each answer.\n"
            "Male or Female?\n";
    cin >> input;

    if(input == "Male" || input == "male")
    {
        gender = 'M';
        cout << "Superhero or Supervillain?\n";
        cin >> input;
    }
    if(input == "Female" || input == "female")
    {
        gender = 'F';
        cout << "Superhero or Supervillain?\n";
        cin >> input;
    }
    if(input == "Superhero" || input == "superhero")
    {
        if(gender == 'F')
        {
            cout << "Anime or Sitcom?\n";
            cin >> input;
        }
        else
        {
            cout << "Steak or Sushi?\n";
            cin >> input;
        }
    }
    if(input == "Anime" || input == "anime")
        cout << "\nYou should go with bangs!\n";
    else if(input == "Sitcom" || input == "sitcom")
        cout << "\nYou should get a bob!\n";
    else if(input == "Steak" || input == "steak")
        cout << "\nYou should get a flat top!\n";
    else if(input == "Sushi" || input == "sushi")
        cout << "\nYou should get a pompadour!\n";
    else if(input == "Supervillain" || input == "supervillain")
        cout << "\nYou should get a mohawk!\n";   
    else
        cout << "That's not a valid response. Please try again.\n";
    
    return 0;
}

