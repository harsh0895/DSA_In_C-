// 3:- INSERTION SORT ALGORITHM :-

#include<iostream>
using namespace std;

void print_array( int arr[], int n){
    for( int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    for( int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"array before sorting is: "<<endl;
    print_array(arr, n);

    for( int i=1; i<n; i++){
        for( int j=i; j>0; j--){
            if( arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }else{
                break;
            }
        }
    }

    cout<<"array after sorting is: "<<endl;
    print_array(arr, n);

}