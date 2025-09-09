// Write a program to calculate sum of first N odd natural 
// numbers
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int sum = N * N; // Using formula: Sum = N²

    cout << "Sum of first " << N << " odd natural numbers is: " << sum << endl;

    return 0;
}