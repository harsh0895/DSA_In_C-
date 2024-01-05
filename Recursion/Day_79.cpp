#include<iostream>
using namespace std;

int check( string str, int start, int end) {
    if( start >= end ){
        return 1;
    }
    if( str[start] != str[end] ){
        return 0;
    }
    return check(str, start+1, end-1);
}
int main(){
    string str;
    cout<<"Enter your string: ";
    cin>>str;
    int ans = check(str, 0, str.length()-1);
    if( ans==1 ){
        cout<<"palindrome!";
    }else{
        cout<<"Not palindrome!";
    }
}