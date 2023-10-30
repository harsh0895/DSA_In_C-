// 1:- find first and last occurrence of an given element in the array, if element doesn't exists so return [-1,-1].

#include<iostream>
using namespace std;

int main(){
    int arr[] = { 5,7,7,8,8,10 };
    int start = 0;
    int end = (sizeof(arr) / sizeof(int))-1;
    int first = -1;
    int last = -1;
    int mid;
    int target;
    cout<<"Enter your target: ";
    cin>>target;

    // find first occurrence:-
    while ( start<=end )
    {
        mid = start + (end-start)/2;
        if( arr[mid]==target ){
            first = mid;
            end = mid - 1;
        }
        else if( arr[mid]<target ){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    // find last occurrence:-
    start = 0;
    end = (sizeof(arr) / sizeof(int))-1;
    while ( start<=end )
    {
        mid = start + (end-start)/2;
        if( arr[mid]==target ){
            last = mid;
            start = mid + 1;
        }
        else if( arr[mid]<target ){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<"first occ index is: "<<first<<endl;
    cout<<"last occ index is: "<<last<<endl;
    
}