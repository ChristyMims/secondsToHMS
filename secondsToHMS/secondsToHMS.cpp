// secondsToHMS.cpp : Defines the entry point for the console application.
// Christy Mims
// CSC 101
// January 25, 2018
// Programming Lab 1
// This program will convert seconds to hours:minutes:seconds.

#include "stdafx.h"
#include <iostream>


using namespace std;


int main()
{
	// declare and initialize variables
	int secondsIn = 0;
	int secondsOut = 0;
	int minutesOut = 0;
	int hoursOut = 0;


	// prompt the user to input seconds
	cout << "This program will convert seconds to the format hours:minutes:seconds." << endl;
	cout << "Enter the number of seconds to convert" << endl;
	// get the input and store it
	cin >> secondsIn;

	// calculate hours, minutes, and seconds
	secondsOut = secondsIn % 60;
	minutesOut = secondsIn / 60;
	hoursOut = minutesOut / 60;
	minutesOut = minutesOut % 60;

	// output the results
	cout << secondsIn << " seconds converted to hours:minutes:seconds is "
		<< hoursOut << ":" 
		<< minutesOut << ":"
		<< secondsOut
		<< endl;

	// pause the output in the debugger
	cout << "Press Enter to continue" << endl;
	cin.get();
	cin.get();
    return 0;
}

