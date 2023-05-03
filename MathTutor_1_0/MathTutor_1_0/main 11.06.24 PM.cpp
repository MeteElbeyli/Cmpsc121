//
//  main.cpp
//  MathTutor_1_0
//
//  Created by Mete Elbeyli on 9/30/21.
/* Author: Mete Elbeyli
Email: mbe5290.psu.edu
Course: CMPSC 121
Assignment: Lab 5
Due Date: 10/01/21
File: MathTutor_1_0.cpp .cpp
Purpose: This program uses random numbers to generate addition, subtraction, and multiplication problems for elementary school students to practice.
Compiler: XCODE
Operating System: Mac OS
*/


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>


using namespace std;


int main()
{
    cout << "Welcome to the awesome math tutor! \nGet ready to add, subtract, or mulyiply!" << endl ;
    unsigned int seed = (unsigned int) (time (0));
    srand(seed);
    int number1 , number2 , problem , answer;
    {
    problem = (rand() % 3) + 1;
    number1 = (rand() % 100) + 1;
    number2 = (rand() % 100) + 1;
    }
    if (problem == 1)
    {
        cout << "How much is " << number1 << "+" << number2 << "\n" ;
        cin >> answer ;
        if (answer == (number1 + number2))
            cout << "\nGood job! That is correct!";
        else
            cout << "\nSorry, that is not correct. The correct answer is: " << number1 + number2;
    }
    else if (problem == 2)
        if (number1 > number2)
        {
            cout << "How much is " << number1 << " - " << number2 << "\n";
            cin >> answer;
            if (answer == (number1 - number2))
                cout << "\nGood job! That is correct!";
            else
                cout << "\nSorry, that is not correct. The correct answer is " << number1 - number2;
        }
        else
        {
            cout << "How much is " << number2 << " - " << number1 << "\n";
            cin >> answer;
            if (answer == (number2 - number1))
                cout << "\nGood job! That is correct!";
            else
                cout << "\nSorry, that is not correct. The correct answer is " << number1 - number2;
        }


    else if (problem == 3)
        {
            number1 = (rand() % 100) + 1;
            number2 = (rand() % 100) + 1;
            cout << "How much is " << number1 << " * " << number2 << "\n";
            cin >> answer;
            if (answer == (number1 * number2))
                cout << "\nGood job! That is correct!";
            else
                cout << "\nSorry, that is not correct. The correct answer is " << number1 * number2;
        }
}

