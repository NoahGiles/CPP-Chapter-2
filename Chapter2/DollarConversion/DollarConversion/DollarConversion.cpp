// DollarConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double dollarsUS, dollarsPounds, dollarsPesos, dollarsYen;
    cout << "Welcome  to Dollar Converter!\nEnter an amount of US money that you'd like to convert : ";
    cin >> dollarsUS;
    dollarsPounds = .81 * dollarsUS;
    dollarsPesos = 22.23 * dollarsUS;
    dollarsYen = 107.50 * dollarsUS;
    cout << dollarsUS << " US dollars translate to " << dollarsPounds << " pounds, " << dollarsPesos << " pesos, and " << dollarsYen << " yen.";

}
