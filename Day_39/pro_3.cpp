// 3:- Kadane's Algoriuthm:- Write a program to find largest sum of subarray in the given array ?
#include<iostream>
using namespace std;

int main(){
    int arr[] = { 4,-6,2,8,2 };
    int n = sizeof(arr)/sizeof(int);
    int prefix = 0;
    int maxi = INT16_MIN;
    // cout<<maxi;
    for( int i=0; i<n; i++ ){
        prefix = prefix + arr[i];
        maxi = max( maxi, prefix );
        if( prefix<0 ){
            prefix = 0;
        }
    }
    cout<<"largest sum is: "<<maxi;
}