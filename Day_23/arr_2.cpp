#include<iostream>
using namespace std;

int main(){
    // 2:- Write a program to reverse an given array.

    int arr[5] = { 6,11,7,4,8 };
    int i=0;
    int j=sizeof(arr)/sizeof(int)-1;
    
    while( i<=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;;
        i++;
        j--;
    }
    for(int i=0; i<5 ; i++ ){
        cout<<arr[i]<<endl;
    }


}