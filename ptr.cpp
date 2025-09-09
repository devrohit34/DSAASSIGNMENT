#include<iostream>
using namespace std;
int main(){
            int num =20;
            int*ptr=&num;

            cout<<num<<endl;
            printf("%d \n",ptr);

            num++;
            ptr++;
            
            cout<<num<<endl;
            printf("%d \n",ptr);

    return 0;
}