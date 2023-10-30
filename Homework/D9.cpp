#include<iostream>
using namespace std;

int main(){

    // Que 1:-

    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for( int i=1; i<=row; i++ ){
        for( int j=1; j<=i; j++ ){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // Que 2:-

      for( int i=1; i<=row; i++ ){
        for( int j=1; j<=i; j++ ){
            char name = 'A' + j-1; // a+0
            cout<<name<<" ";
        }
        cout<<endl;
    }

    // Que 3:-

    for( int i=10; i<=16; i++ ){
        for( int j=10; j<=i; j++ ){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}