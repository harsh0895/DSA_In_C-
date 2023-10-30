// Solving Pattern Printing Programs by using for loop:- 

#include<iostream>
using namespace std;

int main(){

    // Que 1:-

    int row;
    cout<<"Enter your row number: ";
    cin>>row;
    int col;
    cout<<"Enter your column number: ";
    cin>>col;

    // for( int i=1; i<=row; i++ ){
    //     for( int j=1; j<=5; j++ ){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // } 

     // Que 2:-

    // for( int i=1; i<=row; i++ ){
    //     for( int j=1; j<=col; j++ ){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
     
    //  Que 3:-

    // for( int i=1; i<=row; i++ ){
    //     for( int j=1; j<=col; j++ ){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // Que 4:-

    // for( int i=1; i<=row; i++){
    //     for( int j=col; j>=1; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // Que 5:-

    // for( int i=1; i<=row; i++ ){
    //     for( int j=1; j<=col; j++ ){
    //         cout<<j*j<<" ";
    //     }
    //     cout<<endl;
    // }

    // Que 6:-

    // for( char i='a'; i<='e'; i++ ){
    //     for( int j=1; j<=5; j++ ){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // Que 7:-

    int count=1;
    for( int i=1; i<=row; i++ ){
        for( int j=1; j<=5; j++ ){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}