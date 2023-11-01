// 4:- Write a program to print transpose of a matrix:-

#include <iostream>
using namespace std;

int main()
{
    
    int arr[3][3] = { {1, 2, 3},{4, 5, 6}, {7, 8, 9} };
    int row = 3;
    int col = 3;

    if( row!=col ){
        cout<<"Transpose not possible row and col must be same!"<<endl;
    }
    for( int i=0; i<row; i++ ){
        for( int j=0; j<col; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for( int i=0; i<row-1; i++ ){
        for( int j=i+1; j<col; j++ ){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout<<"After transpose the matrix is: "<<endl;
    for( int i=0; i<row; i++ ){
        for( int j=0; j<col; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}