// Write a program to print first N terms of Fibonacci series
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    if (N < 0) {
        cout << "Invalid input. N must be non-negative." << endl;
        return 0;
    }

    int a = 0, b = 1, fib;

    if (N == 0) fib = 0;
    else if (N == 1) fib = 1;
    else {
        for (int i = 2; i <= N; ++i) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    cout << "The " << N << "th term of the Fibonacci series is: " << fib << endl;
    return 0;
}