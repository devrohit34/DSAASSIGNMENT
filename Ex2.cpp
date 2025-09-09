//Write a program to calculate circumference of a circle
#include <iostream>
using namespace std;

int main() {
    double radius, circumference;
    const double PI = 3.14159;

    // Ask user for radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate circumference
    circumference = 2 * PI * radius;

    // Display result
    cout << "The circumference of the circle is: " << circumference << endl;

    return 0;
}