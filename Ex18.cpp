// Write a program that takes three numbers as input and 
// finds the middle (second largest) number
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int middle;

    // Check all possible orderings
    if ((a > b && a < c) || (a < b && a > c))
        middle = a;
    else if ((b > a && b < c) || (b < a && b > c))
        middle = b;
    else
        middle = c;

    cout << "The middle (second largest) number is: " << middle << endl;

    return 0;
}