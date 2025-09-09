#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        cout << "* "; // Blue asterisk
        for (int j = 0; j < rows - i - 1; j++) {
            cout << "* "; // Black asterisks
        }
        cout << endl;
    }

    return 0;
}