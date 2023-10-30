#include<iostream>
using namespace std;

int main(){

    // Que 1:-
    
    int row=5;
    int col=5;
    
    for( int i=1; i<=row; i++ ){
        for( int j=1; j<=col; j++ ){
            cout<<4<<" ";
        }
        cout<<endl;
    }

    // Que 2:-
      
     for( int i=1; i<=row; i++ ){
        for( int j=1; j<=col; j++ ){
            cout<<j*j<<" ";
        }
        cout<<endl;
    } 

    // Que 3:-
      
     for( int i=1; i<=6; i++ ){
        for( int j=1; j<=6; j++ ){
            cout<<j*j*j<<" ";
        }
        cout<<endl;
    } 
     
    // Que 4:-

    for( int i=1; i<=row; i++ ){
        for( char j='F'; j<='K'; j++ ){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}