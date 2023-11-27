#include<iostream>
using namespace std;

// Problem:  Write a Program to Check whether a year entered by user is Leap Year or not

int main() {
int year;
cout << "Enter a year: ";
cin >> year;
if (year % 4 == 0) {
if (year % 100 == 0) {
if (year % 400 == 0)
cout << year << " is a leap year.";
else
cout << year << " is not a leap year.";
}
else
cout << year << " is a leap year.";
}
else
cout << year << " is not a leap year.";
return 0;
}