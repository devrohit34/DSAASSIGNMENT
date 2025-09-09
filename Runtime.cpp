#include <iostream>
using namespace std;

class btech {
public:
    int roll;
    double cgpa;
    char section;
};

int main() {
    btech* obj = new btech();  // runtime allocation

    obj->roll = 123;
    obj->cgpa = 8.3;
    obj->section = 'A';

    cout << "Roll: " << obj->roll << endl;
    cout << "cgpa: " << obj->cgpa << endl;
    cout << "section: " << obj->section << endl;

    return 0;
}

