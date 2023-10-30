#include<iostream>
using namespace std;

int main(){
    
    int row;
    cout<<"Enter your row number: ";
    cin>>row;
    int space = 0;

    // Que 1:-

    for( int i=1; i<=row; i++ ){
        int space = row-i;
        for( int j=1; j<=space; j++ ){
            cout<<" ";
        }
        for( int k=1; k<=i; k++ ){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Que 2:-

    for( int i=1; i<=row; i++ ){
        space = row-i;
        for( int j=1; j<=space; j++ ){
            cout<<"  ";
        }
        int count = 2*i-1;
        for( int k=1; k<=count; k++ ){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    // Que 3:-

    for( int i=1; i<=row; i++ ){
        int space = row-i;
        for( int j=1; j<=space; j++ ){
            cout<<" ";
        }
        for( int k=1; k<=i; k++ ){
            cout<<"* ";
        }
        cout<<endl;
    }
    for( int i=row; i>=1; i-- ){
        int space = row-i;
        for( int j=1; j<=space; j++ ){
            cout<<" ";
        }
        for( int k=1; k<=i; k++ ){
            cout<<"* ";
        }
        cout<<endl;
    }


}