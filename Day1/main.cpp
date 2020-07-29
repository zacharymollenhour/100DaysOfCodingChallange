#include <iostream>
#include "savings.h"
using namespace std;

int main(void)
{
    Savings();
    Savings saving1(100.0,1.5,200.00,20.0,5); //Default Constructor
    saving1.Input(); //Get input for object

    return 0;
}