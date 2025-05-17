#include<iostream>
using namespace std;
int main(){
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    char operation;
    cout << "Enter the operation you want to perform (+,-,/,*,%): ";
    cin >> operation;
    switch(operation){
        case '+':
            cout << "Sum of " << num1 << " and " << num2 << " = " << num1 + num2;
        break;
        case '-':
            cout << "Subtaction of " << num1 << " and " << num2 << " = " << num1 - num2;
        break;
        case '*':
            cout << "Multiplication of " << num1 << " and " << num2 << " = " << num1 * num2;
        break;
        case '/':
            if(num2 == 0){
                cout << "Division by zero is not allowed!" << endl;
            }
            else{
                cout << "Division of " << num1 << " and " << num2 << " = " << num1 / num2;
            }
        break;
        case '%':
            // We convert the decimal values into integer beacause Modulus can't be apply on decimal's. 
            cout << "Modulus of " << int(num1) << " and " << int(num2) << " = " << int(num1) % int(num2);
        break;
        default:
            cout << "Invalid Operator!!! Please enter valid." << endl;
        break;
    }
    return 0;
}