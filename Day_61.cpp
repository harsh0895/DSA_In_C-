// Pointers in C++:-
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *add = &a;
    cout<<"Value: "<<a<<endl;
    cout<<"address: "<<add<<endl;
    cout<<"address: "<<&a<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(add)<<endl;

    float m =2.6;
    float *ptr = &m;
    cout<<ptr<<endl; // address;
    cout<<*ptr<<endl; // value;
}
