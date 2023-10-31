// 2D Array interview problems:-
// 1:- How to create 2D vector in C++:-

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // vector<vector<int>>matrix(row, vector<int>(columns, initialize));
    vector<vector<int> >matrix(3, vector<int>(4,1));

    for( int i=0; i<3; i++ ){
        for( int j=0; j<4; j++ ){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Rows: "<<matrix.size()<<endl;
    cout<<"Columns: "<<matrix[0].size()<<endl;
}