// Operators in C++:-

#include<iostream>
using namespace std;

int main(){

    // Arithmetic Operstors:-

    int a=10, b=5;
    // cout<<a + b<<endl;
    // cout<<a - b<<endl;
    // cout<<a * b<<endl;
    // cout<<a / b<<endl;
    // cout<<a % b<<endl;
    // cout<<a++<<endl;
    // cout<<++a<<endl;
    // cout<<b--<<endl;
    // cout<<--b<<endl;

    // Comparison Operator:-

    cout<<(a==b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a!=b)<<endl;

    // Logical operator:-

    char ch='a';
    // OR:-
    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
        cout<<"This is a vowel"<<endl;
    }
    else{
        cout<<"This is not a vowel"<<endl;
    }

    // And:-
    int c = 15;
    if( a>b && a>c ){
        cout<<"a is greater number"<<endl;
    }
    else if( b>a && b>c ){
        cout<<"b is greater number"<<endl;
    }
    else{
        cout<<"c is greater number"<<endl;
    }

    // Not:-
    if( !(a==b) ){
        cout<<"true"<<endl;
    } 
    else{
        cout<<"false"<<endl;
    }
    
}