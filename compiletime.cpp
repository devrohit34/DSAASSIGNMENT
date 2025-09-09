#include <iostream>
using namespace std;

class btech {
public:
    int roll;
    double cgpa;
    char section;
};

int main() {
    btech obj;  // Compile-time (stack) allocation

    obj.roll = 123;
    obj.cgpa = 8.3;
    obj.section = 'A';

    cout << "Roll: " << obj.roll << endl;
    cout << "CGPA: " << obj.cgpa << endl;
    cout << "Section: " << obj.section << endl;

    return 0;
}