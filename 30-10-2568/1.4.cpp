#include<iostream>
using namespace std;

int main(){
    string op;
    double num1, num2, result;
    cout << "Enter Operator (+ - * /): ";
    cin >> op;

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    if (op == "+") {
        result = num1 + num2;
    }
    else if (op == "-") {
        result = num1 - num2;
    }
    else if (op == "/") {
        result = num1 / num2;
    }
    else if (op == "*") {
        result = num1 * num2;
    }
    else {
        cout << "Wrong Operator.";
        result = 0;
    }

    if (result != 0){
        cout << "Result : " << result;
    }
}
