#include<iostream>
using namespace std;

// Problem: Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor and dividend should be integers.)

int main(){
    int a,b;
    cin>>a>>b;

    int quotient, remainder;
    quotient = a/b;
    remainder = a%b;
    cout<<quotient<<endl;
    cout<<remainder<<endl;


    return 0;
}