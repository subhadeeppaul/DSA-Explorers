#include<iostream>
using namespace std;

// Problem:  Write a Program to Check Whether a Character is Vowel or Consonant.


int main(){
   char ch;
   cin>>ch;
   if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I'|| ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u'){
    cout<<"Vowel"<<endl;
   }

   else{
    cout<<"Consonent"<<endl;
   }
}