// Write a program to print all Armstrong numbers under 
// 1000
#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers under 1000 are:\n";

    for (int num = 1; num < 1000; ++num) {
        int original = num;
        int sum = 0;

        while (original != 0) {
            int digit = original % 10;
            sum += digit * digit * digit;
            original /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    cout << endl;
    return 0;
}