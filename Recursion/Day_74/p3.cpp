#include<iostream>
using namespace std;

// Write a program to calculate power of a number using recursion ?

int calculatePower(int a, int b){
    // base case:-
    if( b==0 ) return 1;

    return a * calculatePower(a, b-1);
}

int main(){
    int a;
    int b;
    cout<<"enter your number: ";
    cin>>a;
    cout<<"enter the power number: ";
    cin>>b;
    int power = calculatePower(a, b);
    cout<<power;

}