// Binary Search:-

#include<iostream>
using namespace std;

void print_array( int arr[], int n){
    for( int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid;
    while ( start<=end )
    {
        mid = (start + end) /2;
        if( arr[mid] == key ){
            // cout<<"your key index is: "<<mid<<endl;
            return mid;
        }
        else if( arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1; // if element not present in the given array then return -1 !
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for( int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the search element: ";
    cin>>key;

    cout<<"your element index is: "<<binarySearch(arr, n, key);
}