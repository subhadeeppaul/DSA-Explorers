#include<iostream>
using namespace std;

// Problem: Program to Display Factors of a Number


int main() {

int n, i;
cin >> n;
cout << "Factors of " << n << " are: ";
for(i = 1; i <= n; ++i) {
    if(n % i == 0)
        cout << i << " ";
}

}