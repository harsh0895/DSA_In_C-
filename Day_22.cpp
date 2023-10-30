// Array in C++:-

#include<iostream>

using namespace std;

int main(){

int arr[] = { 1,2,3,4,5 };

// array elements input:-
// for( int i=0; i<5; i++ ){
//     cin>>arr[i];
// }
// array element print:-
for( int i=0; i<5; i++ ){
    cout<<arr[i]<<endl;
}

int arraylength = sizeof(arr) / sizeof(int);
cout<<arraylength<<endl;

// 1:- write a program to calculate sum of array:-

int ar[5] = { 1,2,3,4,5 };
int sum = 0;
for( int i=0; i<5; i++ ){
    sum = sum + ar[i];
}
cout<<"The sum all elements is: "<<sum<<endl;

// 2:- Write a program to find minimum or maximum number in the given array:-

int arra[] = { 1,2,3,4,5 };
// int max = INT_MIN;
// int min = INT_MAX;
for( int i=0; i<5; i++){
    if( arra[i]>max){
        max = arra[i];
    }
    if( arr[i]<min ){
        min = arra[i];
    }
}
cout<<"Max value: "<<max<<endl;
cout<<"Min value: "<<min<<endl;

}