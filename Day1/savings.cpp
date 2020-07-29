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


SavingsAccount:: SavingsAccount(int value)
{
    savingsBalance = value;
}

float SavingsAccount :: annualInterestRate = 0;

void SavingsAccount::calculateMonthlyInterest()
{
    savingsBalance += ((savingsBalance * annualInterestRate) / 12);
}

void SavingsAccount::modifyInterestRate(float value)
{
    annualInterestRate = value;
}


