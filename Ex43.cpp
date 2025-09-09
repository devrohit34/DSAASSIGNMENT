#include <iostream>
using namespace std;

int main() {
    int size = 4; // Size of the square sides

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Check if the current position is on the perimeter
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                if (j == 0) {
                    // Left column in blue
                    cout << "\033[34m*\033[0m ";
                } else {
                    // Other perimeter positions in default color
                    cout << "* ";
                }
            } else {
                // Inside the square (empty space)
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}