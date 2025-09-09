#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        // Print spaces to shift stars to the right
        for (int j = 0; j < rows - i; j++) {
            cout << "  ";
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}