//
//  main.cpp
//  Looping
//
//  Created by Mikha Yupikha on 28/09/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//
/* Write a program that asks the user for a positive integer value. The program should use a loop to get the sum of all the integers from 1 up to the number entered */

#include <iostream>
using namespace std;

int main( )
{
    int Number;
    int initialNumber = 1;
    int sum=0;

    cout<< "Please input a positive numbers"<<endl;
    cin>> Number;
    
    if (Number<0)
    cout<< "No negative number please"<<endl;
    
    else
    {
    for (initialNumber; initialNumber<=Number; initialNumber++)
    sum += initialNumber;
        cout<< "The Sum is " << sum<< endl;
    }
    
    
    return 0;
}
