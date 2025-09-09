#include <iostream>
using namespace std;

int main() {
    // Number of rows and columns
    int rows = 4;
    int cols = 6;

    // Loop through each row
    for (int i = 0; i < rows; i++) {
        // Loop through each column
        for (int j = 1; j <= cols; j++) {
            cout << j << " ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}