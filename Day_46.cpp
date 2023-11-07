// Binary search in 2D array:-

#include<iostream>
using namespace std;

int main(){
    // Array must be sorted form if you want to apply binary search in the 2D array.
    int matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int target;
    cout<<"Enter you search element target: ";
    cin>>target;
    int ispresent = false;
    int N = 3; //row
    int M = 3; //col
    int start = 0;
    int end = N*M-1;

        while( start<=end ){
            int mid = start + (end-start)/2;
            int ri = mid / M;
            int ci = mid % M;
            if( matrix[ri][ci]==target){
                ispresent = true;
                break;
            }
            else if( matrix[ri][ci] < target ){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    cout<<ispresent;
}