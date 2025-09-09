// Create a program that takes a person's age as input and 
// classifies them into different age groups (e.g., child, 
// teenager, adult, senior)
#include <iostream>
using namespace std;

int main() {
    int age;

    // Input age from the user
    cout << "Enter your age: ";
    cin >> age;

    // Classify based on age
    if (age < 0) {
        cout << "Invalid age entered!" << endl;
    } else if (age <= 12) {
        cout << "You are classified as a Child." << endl;
    } else if (age <= 19) {
        cout << "You are classified as a Teenager." << endl;
    } else if (age <= 59) {
        cout << "You are classified as an Adult." << endl;
    } else {
        cout << "You are classified as a Senior." << endl;
    }

    return 0;
}