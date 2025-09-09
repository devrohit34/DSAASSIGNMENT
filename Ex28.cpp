//  Write a program to count digits in a given number
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    // Handle 0 explicitly
    if (num == 0) {
        count = 1;
    } else {
        // Make sure negative numbers are handled
        num = abs(num);
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}