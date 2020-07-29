// ****************************************************************************
// * Name: Savings cpp file ( savings.cpp filename )                          *
// * Description: This file will assist in the calculating of savings interest*
// * that can be acquired by putting money into a bank account for a set      *
// * time frame                                                               *
// * Author: Zachary Mollenhour                                               *
// * Date: July 29th 2020 ( last modified )                                   *
// ****************************************************************************
#include "savings.h"
#include <iomanip>

//Copy Constructor to initialize the bank
//Account value at instantiation
SavingsAccount:: SavingsAccount(int value)
{
    savingsBalance = value;
}

//Static Data member annualInterestRate is used to store
//the annual interest rate for each user
float SavingsAccount :: annualInterestRate = 0;


//Member function that calculates the monthly interest 
//by multiplying the savings Balance by annual Interest Rate
//divided byu 12 and then adding the interest to the savings 
//balance for final balance
void SavingsAccount::calculateMonthlyInterest()
{
    savingsBalance += ((savingsBalance * annualInterestRate) / 12);
}

//Static member function that sets the static annual interest rate 
//to a new value
void SavingsAccount::modifyInterestRate(float value)
{
    annualInterestRate = value;
}


//Static Member function that gets the input values for all 
//Bank account values
void SavingsAccount::UserInput()
{
    float savingsBalance;

    //input of bank account balance
    cout << "Please enter the starting balance: ";
    cin >> savingsBalance;

    //loop that checks input values to be valid
    while(savingsBalance < 0.0)
    {
        cout << "Invalid Balance. Please Try Again: " << endl;
        cin >> savingsBalance;
    }
    
}

bool SavingsAccount::Set(float balance)
{
    if(savingsBalance < 0.0)
    {
        return false;
    }
    else{
        savingsBalance = balance;
        return true;
    }
}


