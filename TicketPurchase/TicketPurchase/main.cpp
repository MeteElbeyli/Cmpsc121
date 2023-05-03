
/* Author: Mete Elbeyli
Email: mbe5290.psu.edu
Course: CMPSC 121
Assignment: Lab 5
Due Date: 10/22/21
File: TicketPurchase.cpp
Purpose: This program processes a customer’s order for tickets to one or
 more Brookyln Nets game.
Compiler: XCODE
Operating System: Mac OS
*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()

{
    
    int tkt,tkt2, st, st2, amnt, price = 0 ;
    double fnl ;
    
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    cout << "Hello and welcome to The Barclays Center Ticket Purchaser \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;

    
    cout << "\nSelect a game you would like to attend"<< endl;
    
//cin >> tkt;
    {
        cout << "1) Saturday, 11/22, 6:00 PM EST (Dallas Mavericks at The Brooklyn Nets)\n";
        cout << "2) Wednesday 12/11  8:00 PM EST (Los Angeles Lakers at The Brooklyn Nets)\n";
        cout << "3) Thurday 06/17  4:00 PM EST (New York Knicks at The Brooklyn Nets)\n";
        cout << "4) Wednesday 06/23 7:00 PM EST (Milwaukee Bucks at The Booklyn Nets)" << endl  ;
        cout << "Input your choice:"<< endl;
        cin >> tkt ;
            
            while (tkt > 4 || tkt <= 0 )
            {
                cout << "Please enter a valid menu choice above (1-4): ";
                cin >> tkt;
            }
        
        cout << "Seating options?\n";
        cout << "1) VIP Studio ($1000)\n";
        cout << "2) Front Row ($500)\n";
        cout << "3) Level 3   ($200)\n";
        cout << "Select your seating option:"<< endl;
        cin >> st;
            
            while (st > 3 || st <=0 )
            {
                cout << "Please enter a valid menu choice show above (1-3):";
                cin >> st;
            }
      
            
        cout << "How many tickets do you want to purchase:" << endl;
        cin >> amnt;
           
            if (st == 1)
            {
                price = 1000.0;
                cout << "Your final cost is:$" << price * amnt;
              //  cin >> amnt;
            }
                
            else if (st == 2)
            {
                price = 500.0;
                cout << "Your final cost is:$" << price * amnt;
              //  cin >> amnt;
            }
           
            else if (st == 3)
            {
                price= 200.0;
                cout << "Your final cost is:$" << price * amnt;
              //  cin >> amnt;
            }
    
        
    cout << " Do you want to purchase more tickets? (Y/N):" ;
    cin >> fnl;
        

         if (fnl != 'N' || fnl != 'n')
        
           {
               cout << "Thank You for purchasing tickets and enjoy your game!" << endl ;
               cout << "Your total is:$" << price * amnt << endl;
           }
       
        else if (fnl !='Y' || fnl !='y')
       
        {
            cout << "1) Saturday, 11/22, 6:00 PM EST (Dallas Mavericks at The Brooklyn Nets)\n";
            cout << "2) Wednesday 12/11  8:00 PM EST (Los Angeles Lakers at The Brooklyn Nets)\n";
            cout << "3) Thurday 06/17  4:00 PM EST (New York Knicks at The Brooklyn Nets)\n";
            cout << "4) Wednesday 06/23 7:00 PM EST (Milwaukee Bucks at The Booklyn Nets)" << endl  ;
            cout << "Input your choice:"<< endl;
            cin >> tkt2 ;
          
                    while (tkt2 > 4 || tkt2 <= 0 )
                        {
                        cout << "Please enter a valid menu choice above (1-4): ";
                        cin >> tkt2;
                        }
        
        
        cout << "Seating options?\n";
        cout << "1) VIP Studio ($1000)\n";
        cout << "2) Front Row ($500)\n";
        cout << "3) Level 3   ($200)\n";
        cout << "Select your seating option:"<< endl;
        cin >> st2;
                
                while (st2 > 3 || st2 <=0 )
                {
                    cout << "Please enter a valid menu choice show above (1-3):";
                    cin >> st2;
                }
        }
                
        }
        
        
        

    return 0;
    
    }
