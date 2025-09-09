#include<iostream>
#pragma pack(1)
using namespace std;

class btech{
    public:
    int roll;
    double cgpa;
    char section;
};
int main(){
    btech obj;
    cout<<sizeof(obj);
 return 0;
}