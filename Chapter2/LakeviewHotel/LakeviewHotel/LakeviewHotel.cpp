// LakeviewHotel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int nightsStayed, phoneMinutes;
    double bill;
    cout << "How many nights did you stay at Lakeview Hotel?\n";
    cin >> nightsStayed;
    cout << "How many minutes did you use the phone for?\n";
    cin >> phoneMinutes;
    bill = (nightsStayed * 100) + (phoneMinutes*.25) + 200 + 35;
    cout << "Given you stayed " << nightsStayed << " nights at the Lakeview Hotel and you used the phone for " << phoneMinutes << " minutes, your bill is $" << bill << ".";
    
}
