// WAP to take time as an input in below given format and 
// convert the time format and display the result as given 
// below. 
//  User Input date format – “HH:MM” 
#include <iostream>
using namespace std;

int main() {
    string time;
    int hour, minute;

    // Input time in HH:MM format
    cout << "Enter time in HH:MM format: ";
    cin >> time;

    // Extract hour and minute using substr and stoi
    hour = stoi(time.substr(0, 2));
    minute = stoi(time.substr(3, 2));

    // Display in desired format
    cout << "Hour – " << hour << ", Minute – " << minute << endl;

    return 0;
}