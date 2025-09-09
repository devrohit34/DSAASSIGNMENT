#include <iostream>
using namespace std;

int main() {
    // Loop through rows
    for (int i = 0; i < 5; i++) {
        // Loop through columns
        for (int j = 0; j < 5; j++) {
            if (j == 0) {
                // First column (special case)
                cout << "\033[34m*\033[0m "; // Blue asterisk using ANSI escape code
            } else {
                // Regular asterisk
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}