#include<iostream>
using namespace std;

int main(){
    // 4:- write a program to find fibonacci number using array.
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[100];
    arr[0]=0;
    arr[1] = 1;
    for( int i=2; i<n; i++){
        arr[i] = arr[i-1] + arr[2];
    }
    cout<<arr[n-1]<<" ";

}