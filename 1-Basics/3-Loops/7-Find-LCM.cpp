#include<iostream>
using namespace std;

// Problem:  Program to Find LCM


int main() {

int n1,n2,max;
cin>>n1>>n2;

max=(n1>n2)? n1:n2;

do{
    if (max % n1 == 0 && max % n2 == 0)
{
cout << "LCM = " << max;
break;
}
else{
++max;
}
}

while(true);
}