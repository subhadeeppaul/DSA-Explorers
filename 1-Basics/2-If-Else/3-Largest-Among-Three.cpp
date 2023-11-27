#include<iostream>
using namespace std;

// Problem:  Write a Program to Find Largest Number Among Three Numbers entered by users


int main(){
   int a,b,c;
   cin>>a>>b>>c;

   if(a>b && a>c){
    cout<<a;
   }

   else if(b>a && b>c){
    cout<<b;
   }

   else{
    cout<<c;
   }
}