#include<iostream>
using namespace std;

int main(){
    // 5:- write a program to rotate an array.

    int arr[5] = { 1,2,3,4,5};
    int last = arr[4];

    for( int i=3; i>=0; i--){
        arr[i+1] = arr[i];
    }  

}