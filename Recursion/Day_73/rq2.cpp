#include<iostream>
using namespace std;

// 2. Write a program to print even numbers from 1 to N ?

void printEven( int num, int n ){
    if( num>n ){
        return;
    }
    cout<<num<<endl;
    printEven(num+2, n);
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    printEven(2, n);

}