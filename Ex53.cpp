#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int s = 1; s <= rows - i; s++) {
            cout << "  ";
        }

        // Total stars in current row
        int totalStars = 2 * i - 1;

        for (int j = 1; j <= totalStars; j++) {
            // Choose which star to make blue (@)
            if ((i == 1 && j == 1) ||                     // Row 1: first star
                (i == 2 && j == 2) ||                     // Row 2: middle star
                ((i == 3 || i == 4) && j == 2) ||         // Row 3 & 4: second star
                (i == 5 && j == 1)) {                     // Row 5: first star
                cout << "* ";
            } else {
                cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}