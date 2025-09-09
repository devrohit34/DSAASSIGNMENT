// Write a program to print all Prime numbers between two 
// given numbers
#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; ++num) {
        if (num < 2) continue; // Skip numbers less than 2

        bool isPrime = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    cout << endl;
    return 0;
}