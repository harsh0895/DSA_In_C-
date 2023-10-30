// Solving problems in array:-

#include<iostream>
using namespace std;

// 1:- Write a program to search element in the given array.
int main(){
    
    int arr[5] = { 10,20,4,6,8 };
    int element;
    cout<<"Enter your element: ";
    cin>>element;
    bool isPresent = false;

    for( int i=0; i<5; i++ ){
        if( arr[i]==element ){
            isPresent = true;
            break;
        }
    }
    cout<<isPresent;
}