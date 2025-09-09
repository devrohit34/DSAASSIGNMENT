#include<iostream>
using namespace std;

    class btech {
        public:
        int roll;
        void print(){
            cout<<roll<<endl;
            cout<<this<<endl;
        }
        };
    int main(){
        btech obj;
        obj.roll=20;

        cout<<obj.roll<<endl;
        cout<<&obj<<endl<<endl;
        obj.print();

        return 0;
    }
