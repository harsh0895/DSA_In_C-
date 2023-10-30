// 2:- BUBBLE SORT ALGORTIHM:-

#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    for( int i=0; i<n; i++ ){
        cin>>arr[i];
    }
    cout<<"array before sorting is: "<<endl;
     for( int i=0; i<6; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for( int i=n-2; i>=0; i--){
        bool isSwap = false;
        for( int j=0; j<=i; j++ ){
            if( arr[j]>arr[j+1] ){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if( isSwap==false ){
            // cout<<"No swap occurred array have already sorted!"<<endl;
            break;
        }
    }
    cout<<"array after sorting is: "<<endl;
     for( int i=0; i<6; i++ ){
        cout<<arr[i]<<" ";
    }

}