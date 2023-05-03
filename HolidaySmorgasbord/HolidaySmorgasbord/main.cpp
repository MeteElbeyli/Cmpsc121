//
//  main.cpp
//  HolidaySmorgasbord
//
//  Created by Mete Elbeyli on 12/6/21.
//
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

void menu()
{
    cout << "Entrees:\n" ;
    cout << "1) Dog food \n" ;
    cout << "2) Beans \n" ;
    cout << "3) Turkey \n" ;
    cout << "4) Alien Meat\n" ;
    cout << endl;
    cout << "Side Dishes:\n" ;
    cout << "1) Beans \n" ;
    cout << "2) Potatoes....''but mashed'' \n" ;
    cout << "3) Good ole' bread \n" ;
    cout << "4) Salad\n"  ;
    cout << endl;
    cout << "Desserts: \n" ;
    cout << "1) Ice Cream\n" ;
    cout << "2) Strawberry Cake \n" ;
    cout << "3) Brownies\n" ;
    cout << "4) Apple pie\n"  ;
    cout << endl;
    cout << "Beverages: \n" ;
    cout << "1) Pepsi \n" ;
    cout << "2) Coke\n" ;
    cout << "3) H20 \n" ;
    cout << "4) Iced Tea\n" ;
    cout << endl;

}


int main ()
{
    int num, item, quanity;
    cout << "!!! Free Holiday Smorgasbord !!!" << endl;
    menu();
    cout  << "Please enter the number of ** different ** menu items you wish to order. (Note: There are no restrictions on the number of items per category)\n";
    cout << "Number of menu items?:\n";
    cin >> num;
    num = 0 ;
    
    if (num >= 1 || num <= 16 )
    {
        cout << " Enter your selected menu items below:\n";
        cout << "Item #:";
        cin >> item;
        
        if (item >= 1 || item <= 16)
                {
                cout << "Quanity?";
                    cin >> quanity;
        
                }
    }
    
    else
        {
            cout << "Is not a valid choice. Your number" << item; " must be from 1 to 16";
            cout << "Item #:";
        }
    

   // int order[num] = { };
// Issue here
    
return 0;

}
