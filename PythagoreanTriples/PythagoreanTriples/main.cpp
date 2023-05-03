/* Author: Mete Elbeyli
Email: mbe5290.psu.edu
Course: CMPSC 121
Assignment: Lab 10
Due Date: 11/12/21 File: PythagoreanTriples.cpp
Purpose:This program prompts a user to enter 3 positive integers and
reports whether or not they form a Pythagorean Triple.
Compiler: XCODE
Operating System: Mac OS */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <string>


using namespace std;
 

// Function to ask for input and valiadate them, if less than 0 ask again.
void getThreeIntegers(int &intOne, int &intTwo, int &intThree)
{
    cout << "Enter the first integer: \n";
    cin >> intOne ;
    
    while (intOne < 0 )
    {
        cout << "Please Enter a Postive Integer: \n";
        cin >> intOne;
    }
   
    cout << "Enter the second integer: \n";
    cin >> intTwo ;
    
    while (intTwo < 0 )
    {
        cout << "Please Enter a Postive Integer: \n";
        cin >> intTwo;
    }
    
    cout << "Enter the third integer: \n";
    cin >> intThree ;
    
    while (intThree < 0 )
    {
        cout << "Please Enter a Postive Integer: \n";
        cin >> intThree;
    }
    
    
}

// Function to determine if the integers form a Pythagorean Triple by doing the math all types
// If true then states what is is main (these integers are a pythogrean trinagle, if false states otherwise)
bool isTriple(int intOne, int intTwo, int intThree)
{
    if (pow(intOne, 2)+ pow(intTwo, 2) == pow (intThree, 2) || pow (intThree,2) - pow (intOne, 2) == pow(intTwo, 2) || pow(intThree, 2) - pow(intTwo, 2) == pow(intOne, 2))
        return true ;
    else
        return false;
}

// main function that calls for the other and asks if you want to do another set of numbers
int main ()
{
    int intOne = 0, intTwo = 0, intThree = 0, rg;
    
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Pythagorean Triple or not a Pythagorean Triple, is that the question!?" << endl;
    cout << "----------------------------------------------------------------------" << endl;
   
    do {
        cout << "Please enter Three Positive Integers when Prompted \n" ;
        getThreeIntegers(intOne, intTwo, intThree);
        
        if (isTriple (intOne, intTwo, intThree) == true)
            cout << "\n These three integers ARE a Pythagorean Triple \n" ;
        else
            cout << "\n  These three integers ARE NOT a Pythagorean Triple \n" ;
        
        cout << "Would you like to test another set of three numbers? Type 0 for no, or 1 for yes \n" ;
        cin >> rg ;
    } while (rg == 1);
    
    if (rg==0)
        cout << "Thank you for using the Pythagorean Triple Tester \n" ;
    
    return 0;
}





