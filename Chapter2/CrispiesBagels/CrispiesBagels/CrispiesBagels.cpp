// CrispiesBagels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double bagels = .99, donuts = .75, coffee = 1.20, price = 0;
    int userInput;
    
    cout << "How many bagels did the customer order?\n";
    cin >> userInput;
    price += (bagels * userInput);
    cout << "How many donuts did the customer order?\n";
    cin >> userInput;
    price += (donuts * userInput);
    cout << "How many cups of coffee did the customer order?\n";
    cin >> userInput;
    price += (coffee * userInput);
    cout << "The total cost of the customer's order is $" << price << ".";
    
}
