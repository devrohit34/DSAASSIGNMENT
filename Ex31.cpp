// Write a program to reverse a given number 
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;

    int original = num; // To display later

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    cout << "Reversed number of " << original << " is: " << reversed << endl;

    return 0;
}