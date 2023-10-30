// 1:- SELECTION SORT ALGORTIHM:-

#include<iostream>
using namespace std;

int main(){
    int arr[6] = { 10,5,4,1,2,3 };

    cout<<"Array before sorting: "<<endl;
    for( int i=0; i<6; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for( int i=0; i<5; i++){
        int index = i;
        for( int j=i+1; j<6; j++ ){
            if( arr[j]<arr[index] ){
                index = j;
            }
        }
        swap( arr[i], arr[index] );
    }

    cout<<"Array after sorting: "<<endl;
    for( int i=0; i<6; i++ ){
        cout<<arr[i]<<" ";
    }

}