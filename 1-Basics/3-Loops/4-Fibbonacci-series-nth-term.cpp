#include<iostream>
using namespace std;

// Problem:  Write a Program to Display Fibonacci Series upto nth term (n is entered by user)

int main() {
int n;
cin>>n;
int first=0;
int second=1;
for(int i=1;i<=n;i++){
   if(i==1){
    cout<<first<<endl;
    continue;
   }

   if(i==2){
    cout<<second<<endl;
    continue;
   }

   else{

    int third=first+second;
    first=second;
    second=third;

    cout<<third<<endl;

   }
}

}