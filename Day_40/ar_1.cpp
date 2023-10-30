// 1:- 3 sum:-

#include<iostream>
using namespace std;

int main(){
 int arr[] = { 1,4,5,6,10,8 };
 int x = 22;
 int n = sizeof(arr)/sizeof(int);
 int sumExist = false;
 for( int i=0; i<n-2; i++ ){
    int ans = x-arr[i];
    int start = i+1, end = n-1;
    while ( start<end )
    {
        if( arr[start] + arr[end] == ans){
            cout<<"target sum exists"<<endl;
            sumExist = true;
            break;
        }
        else if( arr[start] + arr[end] > ans){
            end--;
        }
        else{
            start++;
        }
    }  
 }
 if( !sumExist){
    cout<<"ans doesn't exist!";
 }
}