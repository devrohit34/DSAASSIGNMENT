//  WAP to take date as an input in below given format and 
// convert the date format and display the result as given 
// below. 
// User Input date format – “DD/MM/YYYY” (27/11/2022) 
// Output format – “Day – DD , Month – MM , Year – YYYY” 
// (Day – 27, Month – 07, Year – 2022) 
#include <iostream>
using namespace std;

int main() {
    string date;
    int day, month, year;

    // Input date in DD/MM/YYYY format
    cout << "Enter date in DD/MM/YYYY format: ";
    cin >> date;

    // Extract day, month, year using substr and stoi
    day = stoi(date.substr(0, 2));
    month = stoi(date.substr(3, 2));
    year = stoi(date.substr(6, 4));

    // Display in desired format
    cout << "Day – " << day << ", Month – " << month << ", Year – " << year << endl;

    return 0;
}