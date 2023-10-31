// 2:- Write a program to print wave form of 2D array:-

#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = { {3,6,4,2}, {7,8,11,5}, {9,3,2,1}, {17,8,5,9} };

    for( int j=0; j<4; j++ ){
            // col=even(print-> up-down)
            if( j%2==0){
                for( int i=0; i<4; i++ ){
                    cout<<arr[i][j]<<" ";                    
                }
            }
            // col=odd(print-> down-up)
            else{
                for( int i=3; i>=0; i-- ){
                    cout<<arr[i][j]<<" ";                    
                }
            }
        }
}