// Remainders.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int eggs, dozenEggs, remainder;
    double price;


    cout << "The egg man is here! To give you your eggs!\nHow many eggs would you like?";
    cin >> eggs;
    dozenEggs = eggs / 12;
    remainder = eggs % 12;
    price = (dozenEggs * 2.00) + (remainder * 0.25);
    cout << "Your " << eggs << " is " << dozenEggs << " dozen with a remainder of " << remainder << ".\nThis will cost you " << price << ".";

    


}
