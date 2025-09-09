// Create a program that takes the lengths of three sides of a 
// triangle as input and determines whether the triangle is 
// equilateral, isosceles, or scalene
#include <iostream>
using namespace std;

int main() {
    float side1, side2, side3;

    // Input the sides of the triangle
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Check for triangle validity first
    if ((side1 + side2 > side3) && 
        (side2 + side3 > side1) && 
        (side1 + side3 > side2)) {

        // Determine the type of triangle
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }

    } else {
        cout << "The given sides do not form a valid triangle." << endl;
    }

    return 0;
}