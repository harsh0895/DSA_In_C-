#include<iostream>
using namespace std;

// Write a program to calculate Sum of square of N natural numbers ?

int squareSum(int n){
    // base case:-
    if( n==1 ) return 1;
    int square = n*n;
    return square + squareSum(n-1);
}

int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    int Sum = squareSum(n);
    cout<<"Square Sum is: "<<Sum;
}