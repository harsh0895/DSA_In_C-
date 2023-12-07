#include<iostream>
using namespace std;

// 1. Write a program to print 1 to n using recursion ?

// with two parameter:-
void print( int num, int n){
    if( num==n ){
        cout<<num;
        return;
    }
    cout<<num<<endl; // print ascending order!
    print(num+1, n);
    // cout<<num<<endl; // print descending order!
}

// with one parameter:-
void print2( int num ){
    if( num==1 ){
        cout<<num<<endl;
        return;
    }
    print2(num-1);
    cout<<num<<endl; // print ascending order!
}

int main(){
    int num = 1;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // print(num, n);
    print2(n);

}