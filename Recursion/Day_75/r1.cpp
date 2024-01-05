#include<iostream>
using namespace std;

// write a program to check the fibonacci number using recursion ?

int checkFib( int n ){
    if( n==0 || n==1){
        return n;
    }
    return checkFib(n-1) + checkFib(n-2);
} 
// 0 1 1 2 3 5 8 13 21 fib number starts from 0!
int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    int num = checkFib(n);
    cout<<"Your fibonacci number is: "<<num;
}