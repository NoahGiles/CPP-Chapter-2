// MadLibs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <String>
using namespace std;

int main()
{
    int a, b, c;
    string color, estWord, bodyPlural, animal, noun, nounPlural;
    cout << "Welcome to MadLibs!\nColor : ";
    cin >> color;
    cout << "\nAnimal : ";
    cin >> animal;
    cout << "\nWord ending in -est : ";
    cin >> estWord;
    cout << "\nBody part (plural) : ";
    cin >> bodyPlural;
    cout << "\nNoun : ";
    cin >> noun;
    cout << "\nNoun (plural) : ";
    cin >> nounPlural;
    cout << "\nNumber : ";
    cin >> a;
    cout << "\nNumber 2 : ";
    cin >> b;
    c = a - b;
    cout << "There once lived a " << animal << " who was " << color << " and was the " << estWord << " in all the land. It  had " << c << " " <<bodyPlural << " that made all of the " << nounPlural
        << " fear him. But they contracted a mighty " << noun << " that put an end to its reign of terror once and for all. The end.";
}