#include<iostream>
using namespace std;

// Problem: Program to Display Prime Numbers Between Two Intervals

int main() {

int low, high, i;
bool isPrime = true;
cin >> low >> high;

while (low < high) {
    isPrime = true;
    if (low == 0 || low == 1) {
        isPrime = false;
    }   
    else {
        for (i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << low << " ";
    ++low;
}










}