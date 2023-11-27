#include<iostream>
using namespace std;

// Problem:  Write a Program to Find Factorial of a given number N (N is entered by user)

int main() {
int n;
cin>>n;
int fact=1;
for(int i=1;i<=n;i++){
    fact=fact*i;
}
cout<<fact<<endl;
}