/* Author: Mete Elbeyli
Email: mbe5290.psu.edu
Course: CMPSC 121
Assignment: Lab 6
Due Date: 10/08/21
File: MetesTrivia.cpp
Purpose: Implements a simple trivia game consisting of five questions.The player is prompted to answer each trivia question, and the program informs the player if his or her answer is correct or incorrect. The program also keeps score. Finally, the program displays the player's score and thanks him or her for playing
Compiler: XCODE
Operating System: Mac OS
*/

#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>


using namespace std;

int main ()

{
    cout << "Welcome to The New York City's Trivia Game" << endl;
    unsigned int seed = (unsigned int)(time(0));
    srand(seed);
    
    string q1, q2, q3, q4, q5,  finalscore ;
    double correct = 0 , incorrect = 0;
    
    cout << "\n Question 1: When was Basketball invented?\n" ;
    cin >> q1;
   
    if (q1 == "1891")
    {
        cout << "Congrats! You got this question correct!" ;
        correct++;
    }
    else
    {
        cout << "You are inncorrect, do you even love basketball?" ;
        incorrect++;
    }
    
    cout << "\n Questions 2: What is Michael Jordan's jersey number during his prime?\n";
    cin >> q2;
    
    if (q2 == "23")
    {
        cout << "Congrats! You got this question correct!";
        correct++;
    }
    else
    {
        cout << "You are inncorrect. This is the easiest question in the history of basketball!";
        incorrect++;
    }
    
    cout << "\n Questions 3: How many players are on each team?\n";
    cin >> q3;
    
    if (q3 == "5")
    {
        cout << "Congrats! You got this question correct!";
        correct++;
    }
    
    else
    {
        cout << "You are inncorrect. What is 10/2?!";
        incorrect++;
    }

    cout << "\n Questions 4: What is the maximum points ever shot in a game?\n";
    cin >> q4;
    
    if (q4 == "100")
    {
        cout << "Congrats! You got this question correct!";
        correct++;
    }
    
    else
    {
        cout << "You are inncorrect! Try harder!";
        incorrect++;
    }
    
    cout << "\n Questions 5: Who won the 2020 NBA Championship?\n";
    cin >> q5;
    
    if (q5 == "Lakers")
    
    {
        cout << "Congrats! You got this question correct!";
        correct++;
    }
    
    else
    {
        cout << "You are inncorrect! Do you even watch tv?";
        incorrect++;
    }
    
    
    cout << "\nYou got ";
    cout << correct ;
    cout << "\n correct and ";
    cout << incorrect ;
    cout << "\n incorrect.";
    
return 0;
}
    
     
    
    
    
    
    


