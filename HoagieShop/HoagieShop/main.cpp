
/* Author: Mete Elbeyli
Email: mbe5290.psu.edu
Course: CMPSC 121
Assignment: Lab 9
Due Date: 11/05/21
File: HoagieShop.cpp
Purpose: C++ program that implements an online hoagie shop
Compiler: XCODE
Operating System: Mac OS
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void showMenu();
void showToppings(double, int);

int main()
{
    int hg, choice;
    
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    cout << "Welcome to Mete's Hoagie Shop! \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;

    const int   ITALIAN   = 1, HAM_AND_CHEESE = 2, TURKEY_BREAST = 3, VEGGIE = 4, EXIT_MENU  = 5;
    cout << fixed << showpoint << setprecision(2);
  
    do
    {
        showMenu();
        cin >> hg ;
       
        while (hg < ITALIAN || hg > EXIT_MENU)
        {
            cout << "Please enter a valid menu choice above (1-5): ";
            cin >> choice ;
        }
        if (choice != EXIT_MENU)
        {
            cout << "Thank you and enjoy your day";
        }
       
        else if (choice = ITALIAN, HAM_AND_CHEESE ,TURKEY_BREAST , VEGGIE)
        {
            showToppings ();
        }
    
    
    
    }
        
            
            
            

    return 0;
}

void showMenu ()
{
cout << "Hoagie Menu ($7 each) \n" ;
cout << "1) Italian \n";
cout << "2)Ham and Swiss \n";
cout << "3) Turkey Breast \n";
cout << "4) Veggie \n" ;
cout << "5) Exit Menu \n" ;
cout << "Input your choice (1-5):"<< endl;
}

void showToppings ()
{
    cout << "1) Extra Cheese ($2.00) \n" ;
    cout << "2) Onions ($1.50)\n";
    cout << "3) Sweet Peppers ($1.00)\n";
    cout << "4) Hot Peppers ($1.00)\n";
    cout << "5) None\n" ;
    cout << "Input your choice (1-5):" << endl ;
    
}
