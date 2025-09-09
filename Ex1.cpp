// Write a program to calculate average of three integers. 
// Numbers are given by the user.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    float average;

    // Ask user for input
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // Calculate average
    average = (num1 + num2 + num3) / 3.0;

    // Display result
    cout << "The average is: " << average << endl;

    return 0;
}