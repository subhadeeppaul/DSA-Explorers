#include<iostream>
using namespace std;

// Problem:  Write a Program to Find GCD or HCF of two numbers
// entered by user


int main() {

int n1,n2,hcf;
cin>>n1>>n2;

while(n1!=n2){
    if(n1>n2){
        n1 -= n2;
    }

    else{
        n2 -= n1;
    }
}

cout<<n1;

}