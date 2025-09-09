#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        cout << "* "; // Blue asterisk (represented as *)
        for (int j = 0; j < i; j++) {
            cout << "* "; // Black asterisks (represented as *)
        }
        cout << endl;
    }

    return 0;
}