// Write a program to input three characters from the user 
// and display characters with their corresponding ASCII 
// codes
#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    // Input three characters from the user
    cout << "Enter first character: ";
    cin >> ch1;

    cout << "Enter second character: ";
    cin >> ch2;

    cout << "Enter third character: ";
    cin >> ch3;

    // Display characters with their ASCII codes
    cout << "\nCharacter and ASCII codes:\n";
    cout << ch1 << " --> " << int(ch1) << endl;
    cout << ch2 << " --> " << int(ch2) << endl;
    cout << ch3 << " --> " << int(ch3) << endl;

    return 0;
}