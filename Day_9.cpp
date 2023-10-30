// Solving Pattern Printing Programs by using for loop:-

#include<iostream>
using namespace std;

int main(){

    // Que 1:-

    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    // for( int i=1; i<=row; i++ ){
    //     for( int j=1; j<=i; j++ ){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Que 2:-

    // for( int i=1; i<=row; i++ ){
    //     for( int j=1; j<=i; j++ ){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // Que 3:-

    // for( int i=1; i<=row; i++ ){
    //     for( int j=1; j<=i; j++ ){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // Que 4:-

    // for( int i=1; i<=row; i++ ){
    //     for( int j=i; j>=1; j-- ){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // Que 5:-
    
    // for( int i=1; i<=row; i++ ){
    //     char name = 'a' + i-1; // a+0
    //     for( int j=1; j<=i; j++ ){
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

    // Que 6:-

    // for( int i=1; i<=row; i++ ){
    //     for( int j=1; j<=5-(i-1); j++ ){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Que 7:-

    // for( int i=1; i<=row; i++ ){
    //     for( int j=1; j<=5-(i-1); j++ ){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // Que 8:-

    for( int i=row; i>=1; i-- ){
        for( int j=row; j>i-1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}