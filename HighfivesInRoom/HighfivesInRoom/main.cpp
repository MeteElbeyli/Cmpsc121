/* Author: Mete Elbeyli
Email: mbe5290.psu.edu
Course: CMPSC 121
Assignment: Lab 11
Due Date: 11/19/21 File: PythagoreanTriples.cpp
Purpose:TThis program finds the number of virtual high fives in a room of "n"
 socially distanced people high-fiving each other.
Compiler: XCODE
Operating System: Mac OS */



#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
int HighFives(int);
//parameter

//body function using other function called HighFives to calculate the number of highfives
int main ()
{
    int people=0;
    
    cout << "----------------------\n" ;
    cout << "| High Five Counter! | \n" ;
    cout << "----------------------\n" ;

    cout << "Please enter the number of people in the room and I will determine the total number of high fives: \n";
    cout << "Number of people:\n";
    cin >> people;
        while (people <= 0 )
        {
            cout << "**  Please enter a valid number of people!  **\n";
            cout << "Number of people:\n";
            cin >> people;
        }
       
    int highfives = HighFives(people);
    
    cout << "With " << people; cout << " people in the room, there are a total of " << highfives; cout <<" Highfives. \n";
    
    return 0;
}
//Recursive function that does the math for number of high fives and has an if statement where if people equals 0 or 1 return 0.
int HighFives (int people)
{
   
   if (people == 0 || people == 1)
   return 0;
   
else
return (people -1) + HighFives(people-1);
}
