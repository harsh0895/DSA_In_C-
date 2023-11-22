// Print all the substring of the given string ?
#include<iostream>
using namespace std;

int main(){
    string str = "abcd";

    for( int i=0; i<str.size(); i++ ){
        for( int j=i+1; j<=str.size(); j++ ){
            cout<<str.substr(i,j)<<" ";
        }
        cout<<endl;
    }
}