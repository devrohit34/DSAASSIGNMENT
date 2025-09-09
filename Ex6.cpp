// Write a program to input a character from the user and print 
// its ASCII code
#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Print the ASCII value
    cout << "The ASCII value of '" << ch << "' is " << int(ch) << endl;

    return 0;
}