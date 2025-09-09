//Write a program to calculate volume of a cuboid
#include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;

    // Get dimensions from user
    cout << "Enter length of the cuboid: ";
    cin >> length;

    cout << "Enter width of the cuboid: ";
    cin >> width;

    cout << "Enter height of the cuboid: ";
    cin >> height;

    // Calculate volume
    volume = length * width * height;

    // Display result
    cout << "Volume of the cuboid is: " << volume << " cubic units" << endl;

    return 0;
}