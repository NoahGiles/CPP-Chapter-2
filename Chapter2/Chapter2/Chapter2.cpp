// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    int quit = 0;
    std::string choice;
    while (quit != 1)
    {
        std::cout << "Choose a code to run!\n2.0 : 0, 2.1 : 1, 2.2 : 2, 2.3 : 3";
        getline(std::cin, choice);
        if (choice == "0")
        {
            expensiveCalculator();
        }
        else if (choice == "1")
        {
            temperatureProblem();
        }
        else if (choice == "2")
        {
            remainder();
        }
        else if (choice == "3")
        {
            totalBill();
        }
        else
        {
            quit = 1;
        }
        std::cout << "Would you like to quit? 1 for yes, anything else for no.";
        cin >> quit;
        getline(cin, quit);
    }
}
//2.0
int expensiveCalculator()
{

}
//2.1
int temperatureProblem()
{

}
//2.2
int remainder()
{

}
//2.3
int totalBill()
{

}