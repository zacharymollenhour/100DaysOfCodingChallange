// ****************************************************************************
// * Name: main cpp file ( main.cpp filename )                                *
// * Description: This file will assist in the calculating of savings interest*
// * that can be acquired by putting money into a bank account for a set      *
// * time frame                                                               *
// * Author: Zachary Mollenhour                                               *
// * Date: July 29th 2020 ( last modified )                                   *
// ****************************************************************************

#include <iostream>
#include "savings.h"
using namespace std;

int main(void)
{
    float savingsBalance = 0.0;
    //input of bank account balance
    cout << "Please enter the starting balance: ";
    cin >> savingsBalance;
    SavingsAccount person1(savingsBalance);
    //person1.UserInput();

    SavingsAccount::modifyInterestRate(3);

    

    person1.calculateMonthlyInterest();
    cout << "Person 1 Savings Balance: " << person1.GetBalance() << endl;

    return 0;
}