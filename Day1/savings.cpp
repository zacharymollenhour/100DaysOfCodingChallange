// ****************************************************************************
// * Name: Savings cpp file ( savings.cpp filename )                          *
// * Description: This file will assist in the calculating of savings interest*
// * that can be acquired by putting money into a bank account for a set      *
// * time frame                                                               *
// * Author: Zachary Mollenhour                                               *
// * Date: July 29th 2020 ( last modified )                                   *
// ****************************************************************************
#include "savings.h"
void Savings:: Input()
{
    float balance,interest,depositAmount;
    int monthsOpen;

    //Input of user Balance
    cout << "Please enter your current savings balance: ";
    cin >> balance;

    //Input of interest rate
    cout << "\nPlease enter your expected interest rate: ";
    cin >> interest;

    //Input of Deposit Amount
    cout << "\nPlease enter your expected recurring deposit amount (ex. 10.00): ";
    cin >> depositAmount;
    cout << "\nPlease enter the amount of months you want to calculate interest for (ex. 10): ";
    cin >> monthsOpen;

    //loop that continues untill the user enters valid data above
    while(!Set(balance,interest,depositAmount,monthsOpen))
    {
        cout << "Please enter valid data. Try Again: " << endl;
        cout << "Please enter your current savings balance: ";
        cin >> balance;

        //Input of interest rate
        cout << "\nPlease enter your expected interest rate: ";
        cin >> interest;

        //Input of Deposit Amount
        cout << "\nPlease enter your expected recurring deposit amount (ex. 10.00): ";
        cin >> depositAmount;
        cout << "\nPlease enter the amount of months you want to calculate interest for (ex. 10): ";
        cin >> monthsOpen;
    }
}

bool Savings:: Set(float balance,float interest,float depositAmount,int monthsOpen)
{
    //Check if data is valid
    if(balance >= 0.0)
    {
        if(interest >= 0.0)
        {
            if(depositAmount >= 0.0)
            {
                if(monthsOpen >= 0)
                {
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int Savings:: GetBalance() const
{
    return User_Balance;
}