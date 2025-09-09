#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        char ch = 'A'; // Start from A for each row
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++; // Move to next letter
        }
        cout << endl;
    }

    return 0;
}