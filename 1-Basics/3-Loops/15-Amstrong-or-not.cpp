#include<iostream>
#include <cmath>
using namespace std;

// Problem: Program to Check Armstrong Number

// THEORY:
// A positive integer is called an Armstrong number (of order n) if abcd... = a^n + b^n + c^n + d^n + ...
// For example, 153 is an Armstrong number because
// 153 = 1*1*1 + 5*5*5 + 3*3*3

int main() {

int num, originalNum, remainder, n = 0, result = 0, power;
cin >> num;

originalNum = num;

while (originalNum != 0) {
    originalNum /= 10;
    ++n;
}
originalNum = num;

while (originalNum != 0) {
    remainder = originalNum % 10;
// pow() returns a double value
// round() returns the equivalent int
    power = round(pow(remainder, n));
    result += power;
    originalNum /= 10;
}
if (result == num)
    cout << num << " is an Armstrong number.";
else
    cout << num << " is not an Armstrong number.";
}

//EXPLANATION:
//Step 1: Calculated the number of digits of the entered number
//Step 2: The pow() function computes the power of individual digits in each //iteration of the while loop.