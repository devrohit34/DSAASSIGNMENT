// Write a program to calculate sum of first N even natural 
// numbers
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int sum = N * (N + 1); // Using formula: Sum = N × (N + 1)

    cout << "Sum of first " << N << " even natural numbers is: " << sum << endl;

    return 0;
}