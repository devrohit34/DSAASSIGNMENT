// Write a program that reads two integers from the user 
// and determines if the first integer is divisible by the second 
// integer
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two integers from the user
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    // Check for division by zero
    if (num2 == 0) {
        cout << "Division by zero is not allowed!" << endl;
    } else {
        // Check if num1 is divisible by num2
        if (num1 % num2 == 0) {
            cout << num1 << " is divisible by " << num2 << "." << endl;
        } else {
            cout << num1 << " is not divisible by " << num2 << "." << endl;
        }
    }

    return 0;
}