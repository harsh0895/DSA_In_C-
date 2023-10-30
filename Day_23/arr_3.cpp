#include<iostream>
using namespace std;

int main(){
    // 3:- Write a program to find second maximum number.

    int arr[6] = { 2,6,5,7,8,9 };
    int maxi = -1;
    for( int i=0; i<6; i++ ){
        if( arr[i]>maxi ){
            maxi = arr[i]; 
        }
    }
    int second = -1;
    for( int i=0; i<6; i++ ){
        if( maxi != arr[i]){
            second = max(second, arr[i]);
        }
    }
    cout<<"Second largest is: "<<second;
}