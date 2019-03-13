//
//  main.cpp
//  Roman Numeral Converter
//
//  Created by Emmanuel Idehen on 2/21/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//
//  Submitted to Mr. Marcus Golden(CS2014 Computer programming II)
//  Due Feb. 22nd, 2019.
/*
 * Roman Numeral Converter
 * Write a program that displays the roman numeral equivalent of any decimal number
 * between 1 and 20 that the user enters. The roman numerals should be stored in an array of
 * strings and the decimal number that the user enters should be used to locate the array element
 * holding the roman numeral equivalent. The program should have a loop that allows
 * the user to continue entering numbers until an end sentinel of 0 is entered.
 * Input validation: Do not accept scores less than 0 or greater than 20.
 *
 */

/*
 Psuedo code:
 Create an array, RomanNumeral of size 21( storing the first numeral in position 1 since arrays starts from 0)
 Create a do while loop to take input from user and continues as long as the user doesn't input 0
 Check if the choice of number is between the range of values!
 if in range, output corresponding array position!
 If not, an error has occured
 if 0, exit
 */


#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Variable decleration
    int choice_of_number = 0;
    const int size = 21;
    //array RomanNumeral of size size
    string RomanNumeral[size] = { " ","I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX"};
    do
    {
        
        do//do while loop
        {
            //ask for a number, take input or exit with 0;
            cout << "\nTo exit at any time press 0"<<endl;
            cout << "Enter your choice of number between 1 & 20: ";
            cin  >> choice_of_number;
            
            if (choice_of_number < 0 || choice_of_number > 20)//check if number is less than 0 or greater than 20
                cout << "\nThe number you entered is not accepted ! \n";//if so number not accepted!
            else if (choice_of_number == 0)// if 0 was entered, return !
            {
                return 0;
            }
            
        } while (choice_of_number < 0 || choice_of_number > 20);//while it less than 0 and greater than 20!
        
        cout <<"The equivalent numeral number for " << choice_of_number <<" is "<< RomanNumeral[choice_of_number] <<" \n "<<endl;
        
    } while (choice_of_number != 0);//while not equal to 0!
    
    cout <<"\n "<<endl;//return!
    return 0;
}
/*
 Test Case(1):
 
 
 To exit at any time press 0
 Enter your choice of number between 1 & 20: 2
 The equivalent numeral number for 2 is II
 
 
 
 
 Test Case(2):
 
 
 To exit at any time press 0
 Enter your choice of number between 1 & 20: -1
 The number you entered is not accepted !
 
 Test Case(3):
 
 
 To exit at any time press 0
 Enter your choice of number between 1 & 20: 20
 The equivalent numeral number for 20 is XX
 
 
 To exit at any time press 0
 Enter your choice of number between 1 & 20: -20
 
 The number you entered is not accepted !
 
 To exit at any time press 0
 Enter your choice of number between 1 & 20: 0
 Program ended with exit code: 0
 
 */
