#include<iostream>
using namespace std;

// Problem:  Write a Program to display sum of all digits of a given Number N by user


int main() {

int n, sum=0, rem;
cin>>n;

while(n!=0){
    rem=n%10;
    sum=sum+rem;
    n/=10;
}

cout<<sum;
}