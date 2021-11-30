
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nick Cook
 */

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter integer number\n";
	cin >> number;
	if (number % 2 == 0) {
		cout << "The value " << number << " is an even number.\n";
	}
	else {
		cout << "The value " << number << " is an odd number.\n";
	}
	return 0;
}



