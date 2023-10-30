// 1:- sort 0 and 1 in an array:-

#include<iostream>
using namespace std;

void printArray( int arr[], int n ){
    
    for( int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = { 0,0,1,1,0 };
    int i = 0;
    int j = (sizeof(arr)/sizeof(int)) - 1;
    int n = sizeof(arr)/sizeof(int);

    cout<<"Array before sorting: ";
    printArray(arr, n);
    
    while ( i<j )
    {
        if( arr[i]==1 && arr[j]==0 ){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else if( arr[i]==0 ){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
    }
    
    cout<<"Array after sorting: ";
    printArray(arr,n);

}