// Write a program to check whether a given number is 
// there in the Fibonacci series or not
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int a = 0, b = 1, fib = 0;

    if (num == 0 || num == 1) {
        cout << num << " is a Fibonacci number." << endl;
        return 0;
    }

    while (fib < num) {
        fib = a + b;
        a = b;
        b = fib;
    }

    if (fib == num)
        cout << num << " is a Fibonacci number." << endl;
    else
        cout << num << " is NOT a Fibonacci number." << endl;

    return 0;
}