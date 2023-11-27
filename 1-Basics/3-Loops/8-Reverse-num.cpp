#include<iostream>
using namespace std;

// Problem:  Write a Program to Reverse a given Number N by user


int main() {

int n, rev=0, rem;
cin>>n;

while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
}

cout<<rev;
}