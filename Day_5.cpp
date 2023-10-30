// For Loop in c++ Advance:-

#include<iostream>
using namespace std;

int main(){
    
    // for( int i=1; i<=100; i+=3){
    //     cout<<i<<endl;
    // }

    // print table:-

    // int num;
    // cout<<"Enter you table number: ";
    // cin>>num;

    // for( int i=1; i<=10; i++ ){
    //     cout<<num<<" X "<<i<<" = "<<i*num<<endl;
    // }

    // Calculate the power of the number:-

    // int n;
    // cout<<"Enter your number: ";
    // cin>>n;
    // int power;
    // cout<<"Enter your power number: ";
    // cin>>power;
    // int ans = 1;
    // for( int i=1; i<=power; i++){
    //     ans = ans*n;
    // }
    // cout<<"The power is: "<<ans;

    // Sum of n natural number:-

    // int no;
    // cout<<"Enter your number: ";
    // cin>>no;

    // int sum = 0;
    // for( int i=1; i<=no; i++ ){
    //     // sum = sum + i;
    //     sum = sum + i*i; // print sum of sqaure!
    // }
    // cout<<"The sum is: "<<sum;

    // Find Factorial of a given number:-

    // int fac;
    // cout<<"Enter your factorial number: ";
    // cin>>fac;
    // int factorial = 1;

    // for( int i=1; i<=fac; i++ ){
    //     factorial = factorial * i;
    // }
    // cout<<"Factorial is: "<<factorial;

    // Print given number is prime or not:-

    int prime;
    cout<<"Enter your number: ";
    cin>>prime;
    
    if( prime<2 ){
        cout<<"Not prime";
        return 0;
    }
    else{
        for( int i=2; i<prime; i++){
            if( prime%i==0 ){
                cout<<"Not prime";
                return 0;
            }
        }
        cout<<"This is prime number!!";
    }

    // Find Fibonacci number:-

    int number;
    cout<<"Enter your number: ";
    cin>>number;
    int first = 0;
    int second = 1;
    int current = 0;
    for( int i=0; i<number-2; i++){
        current = first + second;
        first = second;
        second = current;
    }
    cout<<"Current number is: "<<current;
    
}