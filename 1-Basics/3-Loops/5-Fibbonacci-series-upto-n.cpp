#include<iostream>
using namespace std;

// Problem:  Write a Program to Display Fibonacci Series upto certain number n (n is entered by user)
// Example: n=100
// Output:
// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,

int main() {

int first=0;
int second=1;
int third = 0;
int n;
cin>>n;
third = first+second;

while(third <= n) {
cout<<third<<" ";
first = second;
second = third;
third = first + second;
}
return 0;

}