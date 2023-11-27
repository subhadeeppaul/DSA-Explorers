#include<iostream>
using namespace std;

// Problem:  Write a Program to Find Size of int, float, double and char in your computer


int main(){
   int a, b,temp;
   cin>>a>>b;

   temp=a;
   a=b;
   b=temp;
   cout<<a<<" "<<b<<endl;
}