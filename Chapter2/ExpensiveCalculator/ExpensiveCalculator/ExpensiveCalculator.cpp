// ExpensiveCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float firstNum, secondNum, addNums, subtractNums, multiplyNums, divideNums, crazy/*, numRemainder*/;

    cout << "Enter a number!\n";
    cin >> firstNum;
    cout << "Enter a second number!\n";
    cin >> secondNum;

    addNums = firstNum + secondNum;
    subtractNums = firstNum - secondNum;
    multiplyNums = firstNum * secondNum;
    divideNums = firstNum / secondNum;
    //numRemainder = firstNum % secondNum; (doesn't work!)
    crazy = (firstNum / secondNum) + firstNum * firstNum - secondNum + (2 * 100);
    
    cout << "The sum of " << firstNum << " and " << secondNum << " is " << addNums << ".";
    cout << "\nThe subtraction of " << firstNum << " and " << secondNum << " is " << subtractNums << ".";
    cout << "\nThe multiplication of " << firstNum << " and " << secondNum << " is " << multiplyNums << ".";
    cout << "\nThe division of " << firstNum << " and " << secondNum << " is " << divideNums << ".";
    cout << "\n" << crazy << ".";

    return 0;

}