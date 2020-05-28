// ThreeTemperatures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double temp1, temp2, temp3, tempFar1, tempFar2, tempFar3;
    cout << "Enter a temperature (C) for 8:00.\n";
    cin >> temp1;
    cout << "Enter a temperature (also C) for 12:00.\n";
    cin >> temp2;
    cout << "Enter a temperature (again, C) for 5:00.\n";
    cin >> temp3;

    tempFar1 = (temp1 * 5 / 9) + 32;
    tempFar2 = (temp2 * 5 / 9) + 32;
    tempFar3 = (temp3 * 5 / 9) + 32;

    cout << "At 8:00, the temperature of " << temp1 << " degrees Celsius is " << tempFar1 << " degrees Fahrenheit.\n";
    cout << "At 12:00, the temperature of " << temp2 << " degrees Celsius is " << tempFar2 << " degrees Fahrenheit.\n";
    cout << "At 5:00, the temperature of " << temp3 << " degrees Celsius is " << tempFar3 << " degrees Fahrenheit.\n";
}

