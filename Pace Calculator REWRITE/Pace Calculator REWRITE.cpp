// Pace Calculator REWRITE.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Rewrite on 6/26/21 because original code is too messy

#include <iostream>
#include <cmath>
using namespace std;



// This Converts the mile time (minutes:seconds) into only seconds
double convertMileTimeToSeconds(double mileMinutes, double mileSeconds) {
    return (mileMinutes * 60) + mileSeconds;
}

void convertEventSecondsToMinutes() {


}
int main()
{
    // Define terms
    double mileMinutes;
    double mileSeconds;
    double totalMileTimeInSeconds;

    // Asking user for mile time
    cout << "What is your mile time? (minutes)" << endl;
    cin >> mileMinutes;

    cout << "What is your mile time? (seconds)" << endl;
    cin >> mileSeconds;

    totalMileTimeInSeconds = convertMileTimeToSeconds(mileMinutes, mileSeconds);

    std::cout << "Choose an event to calculate the pace." << std::endl;
    std::cout << "A) 200m\n" << "B) 400m\n" << "C) 800m\n" << "D) 1600m\n" << "E) Mile\n" << "F) 2 Mile\n" << "G) 5k\n" << std::endl;

    string userChoice;
    cin >> userChoice;

    // START OF DIFFERENT EVENTS: Converted Km to Mile
   
    // 200m time 
    if (userChoice == "A" || "a") {
        double eventInDecimalSeconds = (0.1243 * totalMileTimeInSeconds) / 60;
        int firstNumber = eventInDecimalSeconds;
        double firstNumber = eventInDecimalSeconds - firstNumber;

    }


    

}


