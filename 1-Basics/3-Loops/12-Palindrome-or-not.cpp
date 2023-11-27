#include<iostream>
using namespace std;

// Problem: Program to Check Whether a Number is Palindrome or Not

// THEORY: If the reversed integer is equal to the integer entered by user then, that number is a palindrome if not that number is not a palindrome.


int main() {

int n, num, digit, rev = 0;
cin>>num;
n=num;

do{
    digit = num % 10;
    rev = (rev * 10) + digit;
    num = num / 10;
}

while (num != 0);
cout << rev <<endl;;

if (n == rev)
    cout << "The number is a palindrome.";
else
    cout << "The number is not a palindrome.";
}