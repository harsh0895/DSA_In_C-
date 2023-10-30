// 2:- Fint two sum with given target in an sorted array:- Two Pointer Approach!!

#include<iostream>
using namespace std;

int main(){
    int arr[] = { 2,7,11,15,27 };
    int target;
    cout<<"Enter your target: ";
    cin>>target;

    int start = 0;
    int end = (sizeof(arr)/sizeof(int)) - 1;

    while( start<end ){
        int sum = arr[start] + arr[end];
        if( sum == target ){
            cout<<"the sum of "<<arr[start]<<" and "<<arr[end]<<" is: "<<sum;
            break;
        }
        else if( sum < target ){
            start++;
        }
        else{    // (sum > target)
            end--;
        }
    }
}