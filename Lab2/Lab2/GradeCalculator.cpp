//
//  main.cpp
//  Lab2
//
//  Created by Mete Elbeyli on 9/3/21.
//
/* Author: Mete Elbeyli
Email: mbe5290.psu.edu
Course: CMPSC 121
Assignment: Lab 2
Due Date: 9/10/21
File: Grade Calculator.cpp
Purpose: Prompt a student to enter name, last 4 digits of ID, and scores for exams, final exam, and lab projects; the program then computes and displays the student’s identifying information             and final course average.
Compiler: XCODE
Operating System: Mac OS
*/




#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name, name2;
    int ID, score1, score2, score3, score4;
    double average;
     
    cout << "\n First Name:  ";
    cin >> name;
    
    cout << "\n Last Name:  ";
    cin >> name2;
    
    cout <<"\n Last 4 digits of ID number:  ";
    cin >> ID ;
    
    cout << "\n Exam one grade:  ";
    cin >> score1 ;
    
    cout << "\n Exam two grade:   ";
    cin >>  score2 ;

    cout << "\n Final exam grade:   ";
    cin >> score3 ;
    
    cout << "\n Lab projects grade:   ";
    cin >> score4 ;
    
    average = (score1*0.20 + score2*0.20 + score3*0.25 + score4*0.35) ;
    cout << setprecision(1) << fixed << showpoint;
    cout << "\n Student: " << name << " " << name2;
    cout << "\nID: " << ID;
    cout << "\nFinal grade: " <<average;

    
    return 0;
    }




