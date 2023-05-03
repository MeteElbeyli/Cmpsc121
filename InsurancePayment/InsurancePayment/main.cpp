/* Author: Mete Elbeyli

Email: mbe5290.psu.edu

Course: CMPSC 121

Assignment: Lab 4

Due Date: 9/22/21

File: InsurancePayment.cpp

Purpose: This program enables a user to make a one-time insurance payment. The program prompts the user to enter his/her name, policy number, and payment information, then displays a summary of the completed transaction.
 
Compiler: XCODE

Operating System: Mac OS

*/


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name, name2 ;
    int payment, ID, brn, ban ;
    
    
    std::cout << "Welcome to the Liberty Mutual Insurance Company lone-time payment service. Please enter the information requested." << std::endl;
     
    cout << "\n First Name:  " ;
    cin >> name;
     
    cout << "\n Last Name:  ";
    cin >> name2;
    
    cout <<"\n Please Enter Your Policy Number:  ";
    cin >> ID ;
    
    cout << "\n Payment Amount: $ ";
    cin >> payment ;
    
    cout << "\n Bank Routing Number:   ";
    cin >>  brn ;

    cout << "\n Bank Account Number:   ";
    cin >> ban ;
    
    
    cout << setprecision(1) << fixed << showpoint;
    std::cout << "Payment Summary:";
    
    cout << "\n Policy Holder: " << name << " " << name2;
    cout << "\n Policy Number : " << ID;
    cout << "\n Bank Routing Number: " <<brn;
    cout << "\n Bank Account Number: " <<ban;
    cout << "\n Payment Amount: $" << payment;

    std::cout << "\n LiMu Emu and Doug thank you for your payment!" << std::endl;
    return 0;
    }

