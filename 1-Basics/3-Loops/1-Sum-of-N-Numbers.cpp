#include<iostream>
using namespace std;

// Problem:  Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)

int main() {
int n;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++){
    sum=sum+i;
}
cout<<sum<<endl;
}