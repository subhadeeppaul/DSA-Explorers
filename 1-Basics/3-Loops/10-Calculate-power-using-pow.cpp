#include<iostream>
#include<cmath>
using namespace std;

// Problem: Write a Program to Calculate Power of a Number using inbuilt pow() function by taking two inputs from users as Base and exponent respectively


int main() {

float base, exponent, result;
cin>>base>>exponent;

result = pow(base, exponent);
cout<<result;
}