
/* Author: Mete Elbeyli
Email: mbe5290.psu.edu
Course: CMPSC 121
Assignment: Lab 8
Due Date: 10/29/21
File: HypotenuseCalculator.cpp
Purpose:Create a program that uses a function to calculate the length of the
hypotenuse of a right triangle given the lengths of the other two
sides
Compiler: XCODE
Operating System: Mac OS
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


using namespace std;
//Function below declares hypo and formula
double hypo (double side1, double side2)
{
    return sqrt(pow(side1, 2.0) + pow(side2, 2.0));
}

int main()

{
    double  side1, side2 ;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    cout << "Welcome to the Hypothenuse Calculator Program" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    //How many times it says to repeat the code below
    for (int count = 1; count <=4; count ++)
    
    {
    cout << "Please enter the length of side 1:" << endl;
    cin >> side1;
    // If less than or equal to 0 try again
        while ( side1 <= 0 )
        {
            cout << "Please enter a positive value: ";
            cin >> side1;
        }
    
    cout << "Please enter the length of side 2:" << endl;
    cin >> side2;
    // If less than or equal to 0 try again
        while ( side2 <= 0 )
        {
            cout << "Please enter a positive value: ";
            cin >> side2;
        }
    //Set Precision to round it to the nearest 2 decimal spots
    cout << fixed << showpoint << setprecision(2) << "The length of the Hypothenus is: " << hypo(side1, side2) << endl;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    cout << "Thank you for using the Hypotenuse Calculator program!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;

     
    
    
    
    return 0;
}


//for loop
