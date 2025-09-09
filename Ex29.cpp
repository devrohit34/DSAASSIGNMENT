// Write a program to check whether a given number is a 
// Prime number or not
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a Prime number." << endl;
    else
        cout << num << " is NOT a Prime number." << endl;

    return 0;
}