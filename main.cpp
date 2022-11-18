// Name: Femi-Awoyale Toluwalope
// J-Number: J00966835
// PROGRAMMING ASSIGNMENT Example 5-4
// Due-On: 16th November 2022

// Program: Sentinel-Controlled Loop
// This program computes and outputs the total 
// number of boxes of cookies sold, the total revenue, 
// and the average number of boxes sold by volunteer.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string SENTINEL = "-1";

int main()
{
    string name;
    int numofVolunteers;
    int numofBoxesSold;
    int totalNumOfBoxesSold;
    double costofOneBox;

    cout << fixed << showpoint << setprecision(2);

    totalNumOfBoxesSold = 0;
    numofVolunteers = 0;

    cin >> name;

    while (name != SENTINEL) {
        cin >> numofBoxesSold;
        totalNumOfBoxesSold = totalNumOfBoxesSold + numofBoxesSold;
        numofVolunteers++;
        cin >> name;
    }
    cin >> costofOneBox;
    cout << "\n";


    cout << "Total number of boxes sold: "
        << totalNumOfBoxesSold << "\n";
    cout << "Total money made: $"
        << totalNumOfBoxesSold * costofOneBox << endl;

    if (numofVolunteers != 0)
        cout << "Average number of "
        << "boxes sold by each person: "
        << totalNumOfBoxesSold / numofVolunteers
        << endl;
    else
        cout << "No input.";
    return 0;
}
