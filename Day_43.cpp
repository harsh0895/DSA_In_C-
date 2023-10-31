// 2-D Arrays:-

#include<iostream>
using namespace std;

// void printArray( int arr[][3], int row, int col ){
//     for( int i=0; i<row; i++ ){
//         for( int j=0; j<col; j++ ){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

int main(){
    int row = 4;
    int col = 3;
    int arr[row][col];
    int n = row * col;
    cout<<"Enter "<<n<<" array elements: ";
    for( int i=0; i<row; i++ ){
        for( int j=0; j<col; j++ ){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

        for( int i=0; i<row; i++ ){
            for( int j=0; j<col; j++ ){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

        // printArray(arr, row, col);
    }

