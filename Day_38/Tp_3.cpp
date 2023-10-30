// 3:- find the differnce between two elements with the given sorted array with given difference!

#include<iostream>
using namespace std;

int main(){
    int arr[] = { 2,3,5,10,50,80 };
    int start = 0;
    int end = 1;
    int difference = 45;
    int n = sizeof(arr)/sizeof(int);
    int ans = 0;

    while ( end<n )
    {
        int diff = arr[end]-arr[start];
        if( diff==difference ){
            ans = 1; // if ans exists!
            break;
        }
        else if( diff<difference ){
            end++;
        }
        else{
            start++;
        }
    }
    if( ans == 1){
        cout<<"difference exists!"<<endl;
    }
    else{
        cout<<"difference doesnot exists!";
    }
}