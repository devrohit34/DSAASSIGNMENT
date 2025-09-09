//Write a program to calculate simple interest
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;

    // Get input from user
    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Rate of interest (in %): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    // Calculate Simple Interest
    interest = (principal * rate * time) / 100;

    // Display result
    cout << "Simple Interest = " << interest << endl;

    return 0;
}