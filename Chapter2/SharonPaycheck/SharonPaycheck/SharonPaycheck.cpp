// SharonPaycheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double paycheck, paycheckYearly, percentInAccount, totalAmountDeposited;
    cout << "Welcome, Sharon! How much do you earn in a paycheck?\n";
    cin >> paycheck;
    paycheckYearly = paycheck * 24;
    cout << "How much of your paycheck (decimal) would you like to put into your savings account?\n";
    cin >> percentInAccount;
    totalAmountDeposited = (paycheckYearly * percentInAccount) + 100;
    cout << "Your total amount deposited into your savings account should be " << totalAmountDeposited << " dollars.";
}
