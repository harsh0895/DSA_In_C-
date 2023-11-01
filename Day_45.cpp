// Write a program to print rotation of a matrix for 90 Degree:-

#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int row = 3;
    int col = 3;

    cout<<"Before rotation: "<<endl;
     for( int i=0; i<row; i++ ){
        for( int j=0; j<col; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // Transpose:-
        for( int i=0; i<row-1; i++ ){
            for( int j=i+1; j<col; j++ ){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
        // Reverse each row:-
        for( int i=0; i<row; i++ ){
            int start = 0;
            int end = col-1;
            while( start<end ){
                int temp = arr[i][start]; // 00
                arr[i][start] = arr[i][end]; //00=02
                arr[i][end] = temp; //02=00
                start++;
                end--;
            }
        }
    cout<<"After Rotation: "<<endl;
     for( int i=0; i<row; i++ ){
        for( int j=0; j<col; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
}