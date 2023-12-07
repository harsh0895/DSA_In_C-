#include<iostream>
using namespace std;

// Write a program to find the factorial of given number using recursion ?

int factorial(int n){
    // base case:-
    if( n==1 || n==0 ) return 1;

    return n * factorial(n-1);
}
int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    int fac = factorial(n);
    cout<<"Factorial is: "<<fac<<endl;
}