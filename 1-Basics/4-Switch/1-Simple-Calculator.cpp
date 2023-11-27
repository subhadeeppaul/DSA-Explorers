#include<iostream>
using namespace std;

// Problem: Write a Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using Switch case
// The program should takes an arithmetic operator (+, -,*, /) and two operands from a user and performs the operation on those two operands depending upon the operator entered by the user.


int main() {

char op;
float num1, num2;
cout << "Enter operator: +, -, *, /: " <<endl;;
cin >> op;
cout << "Enter two operands: ";
cin >> num1 >> num2;
switch(op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:

        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break;
}

}