// 1:- Write a program to calculate the prefix or suffix sum of the given array:-\

#include<iostream>
using namespace std;

void printArray( int arr[], int n ){
    
    for( int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// void prefix_sum( int arr[], int n ){
//     for( int i=1; i<n; i++ ){
//         arr[i] = arr[i-1] + arr[i];
//     }
//     cout<<"Prefix sum is: "<<endl;
//     printArray(arr, n);
// }

void suffix_sum( int arr[], int n ){
    for( int i=n-2; i>=0; i-- ){
        arr[i] = arr[i+1] + arr[i];
    }
    cout<<"Suffix sum is: "<<endl;
    printArray(arr, n);
}

int main(){
    int arr[] = { 6,4,5,3,7,8 };
    int n = sizeof(arr)/sizeof(int);
    cout<<"Original array is: "<<endl;
    printArray(arr, n);

    // prefix_sum(arr, n);
    suffix_sum(arr, n);



}