#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number for grid size: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Top row
            if (i == 0 && j <= n / 2)
                cout << "* ";
            // Middle row
            else if (i == n / 2)
                cout << "* ";
            // Bottom row
            else if (i == n - 1 && j >= n / 2)
                cout << "* ";
            // Left column
            else if (j == 0 && i >= n / 2)
                cout << "* ";
            // Middle column
            else if (j == n / 2)
                cout << "* ";
            // Right column
            else if (j == n - 1 && i <= n / 2)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}