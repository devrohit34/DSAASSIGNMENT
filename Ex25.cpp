// Write a program to calculate sum of squares of first N 
// natural numbers
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int sum = (N * (N + 1) * (2 * N + 1)) / 6;

    cout << "Sum of squares of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}