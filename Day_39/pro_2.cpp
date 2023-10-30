// 2:- Write a program to divide an array with 2 equal subarray sum ?

#include<iostream>
using namespace std;

int main(){
    int isexist = false;
    int arr[] = { 3,4,-2,5,8,20,-10,8 };
    int n = sizeof(arr)/sizeof(int);
    int totalSum = 0;
    for( int i=0; i<n; i++ ){
        totalSum += arr[i];
    }
    int prefixSum = 0;
    for( int i=0; i<n-1; i++ ){
        prefixSum = prefixSum + arr[i];
        int ans = totalSum - prefixSum;
        if( ans==prefixSum ){
            isexist = true;
            break;
        }
    }
    if( isexist == true ){
        cout<<"subarray exist!"<<endl;
    }
    else{
        cout<<"subarray doesnot exist!";
    }
}