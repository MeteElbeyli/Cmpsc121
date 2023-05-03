/* Author: Mete Elbeyli
Email: mbe5290.psu.edu
Course: CMPSC 121
Assignment: Lab 6
Due Date: 12/03/21
File: MetesTrivia.cpp
Purpose:This program implements a simple trivia game.
Compiler: XCODE
Operating System: Mac OS
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;
//Didnt need this because the answers to mine were all numbers but I left it here (ALL TO UPPERCASE) I WOULD PUT UPPERCASE ANSWERS IN INT QUESTIONS_ANSWERS[10]= {x,y,z}
void convertToUpper(string &tempString)
{
    unsigned int i;
     
    for (i = 0; i < tempString.length(); i++)
    tempString[i] = toupper(tempString[i]);
     
    tempString[i] = '\0';

}


int main()
{
    unsigned int seed = (unsigned int) (time(0));
    srand(seed);
    int incorrect = 0, correct = 0;
    string QUESTIONS_TRIVIA[10] = {"How many Grammy's does Kanye have?", "How old is Kanye?", "Kanye has ____ albums", "Amount of songs Kanye produced?", "Kanye and Kim have been married for how many years?", "When did Kanye start producing music?", "When did Kanye marry Kim?", "For how many years has Jay-Z and Kanye been friends?", "What year did Yeezy's release?","Kanye has had how many marriages?"};
    int QUESTIONS_ANSWERS[10] = {21, 44, 13, 239, 6, 1996, 2014, 21, 2007, 1};
    int PlayerResponse;
    string RP;


    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Welcome To The Kanye West Triva Game \n";
    cout << "Ready to Play (Y/N)?:\n";
    cin >> RP;
    
    if (RP == "N"|| RP == "n")
    {
        cout << "Maybe another time :( \n";
    }

    while (RP == "Y" || RP == "y")
    {
        int question = rand() % 10+1;
        cout << QUESTIONS_TRIVIA[question];
        cout << "\nYour Response?: \n" ;
        cin >> PlayerResponse;
   
        if (PlayerResponse == QUESTIONS_ANSWERS[question])
        {
            cout << "Yes that is correct! Nice job!\n";
            correct++;
        }
        else
        {
            cout << "Sorry, that is incorrect. \n ";
            incorrect++;
        }
        cout << "Would you like to play again? (Y/N): ";
        cin >> RP;
    }
   
    cout << "\n Your Score is: " << correct << " correct, and " << incorrect << " incorrect.";
    

    return 0;
}


