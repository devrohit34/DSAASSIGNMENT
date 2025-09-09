#include <iostream>
using namespace std;

int main() {
    int rows = 7;

    for (int i = 0; i < rows; i++) {
        cout << "@ "; // Blue asterisk for the vertical line

        // Upper diagonal arm
        if (i < rows / 2) {
            for (int j = 0; j < rows / 2 - i; j++) {
                cout << "  ";
            }
            cout << "*";
        }
        // Middle row (center of K)
        else if (i == rows / 2) {
            cout << "*";
        }
        // Lower diagonal arm
        else {
            for (int j = 0; j < i - rows / 2; j++) {
                cout << "  ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}