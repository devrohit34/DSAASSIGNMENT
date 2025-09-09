// Write a program to calculate sum of cubes of first N 
// natural numbers 
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int sum = N * (N + 1) / 2;
    int cubeSum = sum * sum;

    cout << "Sum of cubes of first " << N << " natural numbers is: " << cubeSum << endl;

    return 0;
}