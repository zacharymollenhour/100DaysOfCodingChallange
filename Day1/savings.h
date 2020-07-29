#ifndef SAVINGS_H
#define SAVINGS_H

#include <iostream>
using namespace std;

const int DAYS_IN_YEAR = 365;
const int MONTHS_IN_YEAR = 12;


class Savings
{
private:
    float User_Balance;     //Users Balance in Savings Account
    float Starting_Balance; //Starting Balance Before Interest

    //All variables needed for calculating Interest over a time period
    float Annual_Interest_Rate,
        Amount_Deposited,
        Amount_Withdrawn,
        Intrest_Rate,
        Monthly_Intrest_Rate,
        Total_Deposits,
        Total_Withdrawn,
        Total_Intrest_Earned;
    int MonthsCalculated; //How many months have occured

public:
    //Default Constructor
    Savings()
    {
        User_Balance = 0.0;
        Annual_Interest_Rate = 0.0;
        Amount_Deposited = 0.0;
        Total_Deposits = 0.0;
        MonthsCalculated = 0;
    }
    //Paramerized Constructor
    Savings(int User_Balance, float Annual_Interest_Rate, float Amount_Deposited, float Total_Deposits, float MonthsCalculated)
    {
        User_Balance = 0.0;
        Annual_Interest_Rate = 0.0;
        Amount_Deposited = 0.0;
        Total_Deposits = 0.0;
        MonthsCalculated = 0;
    }
    void Input(); //Function to get the inital information from the user
    bool Set(float balance, float interest, float depositAmount, int MonthsCalculated);
    int GetBalance() const;
    void Output();  //test output function
};


#endif