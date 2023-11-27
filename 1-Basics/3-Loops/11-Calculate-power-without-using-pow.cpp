#include<iostream>
using namespace std;

// Problem: Program to Calculate Power of a Number without using pow()


int main() {

int exponent;
float base, result = 1;
cin>>base>>exponent;

while (exponent != 0) {
result *= base;
--exponent;
}
cout << result;
}