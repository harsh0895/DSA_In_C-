#include<iostream>
using namespace std;

// Write a program to find Sum of N numbers using recursion ?

int findSum(int n){
    // base case:-
    if(n==1) return 1;

    return n + findSum(n-1);
}
int main(){
    int num;
    cout<<"enter your number: ";
    cin>>num;
    int Sum = findSum(num);
    cout<<"Sum is: "<<Sum;
}