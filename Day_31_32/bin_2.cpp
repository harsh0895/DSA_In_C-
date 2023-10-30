// 2:- Find peak index in the given array ?

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,4,6,8,10,8,5}; // peak element:- 10
    int start = 0;
    int end = (sizeof(arr) / sizeof(int))-1;
    int mid;
    while ( start<=end ){
        // mid = start + (end-start)/2;
        mid = end + (start-end)/2;

        if( arr[mid]>arr[mid - 1] && arr[mid]>arr[mid + 1]){
            cout<<"Peak element index is: "<<mid<<endl;
            break;
        }
        else if( arr[mid]>arr[mid - 1]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }    
}