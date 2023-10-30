#include<iostream>
using namespace std;

int main(){

    // 1. Two numbers are given, print the bigger number, It is given that both numbers cant be the same.

    // int a,b;
    // cout<<"Enter first number: ";
    // cin>>a;
    // cout<<"Enter second number: ";
    // cin>>b;
    // if( a>b ){
    //     cout<<"A is bigger number!";
    // }
    // else if( a==b ){
    //     cout<<"Both are equal number!";
    // }
    // else{
    //     cout<<"B is bigger number!";
    // }

    // 2. Write a program to print months by the given number using switch case statement.

    // int monthNum;
    // cout<<"Enter your month number: ";
    // cin>>monthNum;

    // switch ( monthNum )
    // {
    // case 1:
    //     cout<<"January";
    //     break;
    // case 2:
    //     cout<<"Febuary";
    //     break;
    // case 3:
    //     cout<<"March";
    //     break;
    // case 4:
    //     cout<<"April";
    //     break;
    // case 5:
    //     cout<<"May";
    //     break;
    // case 6:
    //     cout<<"June";
    //     break;
    // case 7:
    //     cout<<"July";
    //     break;
    // case 8:
    //     cout<<"August";
    //     break;
    // case 9:
    //     cout<<"September";
    //     break;
    // case 10:
    //     cout<<"Octuber";
    //     break;
    // case 11:
    //     cout<<"November";
    //     break;
    // case 12:
    //     cout<<"December";
    //     break;
    
    // default:
    //     cout<<"Invalid Month Number!!";
    //     break;
    // }

    // 3. Print “India will win the World Cup 2023”, 20 times.

    // for ( int i=1; i<=20; i++ ){
    //     cout<<"India will win the World Cup 2023"<<endl;
    // }

    // 4. Print all Odd numbers from 1 to n, take n as an input from the user.

    // int n;
    // cout<<"Enter n: ";
    // cin>>n;

    // for( int i=0; i<n; i++){
    //     if( !(i%2==0) ){
    //         cout<<i<<endl;
    //     }
    // }

    // 5. Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

    int num;
    cout<<"Enter your number: ";
    cin>>num;

    for( int i=1; i<=num; i++ ){
        if( i%4==0 ){
            cout<<i<<endl;
        }
    }

}