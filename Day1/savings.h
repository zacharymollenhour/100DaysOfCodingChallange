#ifndef SAVINGS_H
#define SAVINGS_H

#include <iostream>
using namespace std;

const int DAYS_IN_YEAR = 365;
const int MONTHS_IN_YEAR = 12;


class SavingsAccount
{
private:
    float savingsBalance;
    float interestRate;

public:
    //Default Constructor
    SavingsAccount(){};
    SavingsAccount(int value);
    ~SavingsAccount(){}
    static float annualInterestRate;
    void calculateMonthlyInterest();
    static void modifyInterestRate(float value);
    float GetBalance() const {return savingsBalance; }
    void UserInput();
    bool Set(float balance);
    //void SetInterestRate(int interest) const { interestRate = interest; }
};



#endif