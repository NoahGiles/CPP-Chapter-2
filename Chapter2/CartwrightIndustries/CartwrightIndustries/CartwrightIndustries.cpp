// CartwrightIndustries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double payInput, fedWithholding = .20, socialSecurity = .08, incomeTax = .04;
    cout << "What is the employee's gross weekly pay?";
    cin >> payInput;
     payInput -= (fedWithholding * payInput) + (socialSecurity * payInput) + (incomeTax * payInput);
    cout << "The employee's weekly net pay is $" << payInput << " with FWT, FICA, and state income tax.";
}