// Strings in C++:-

#include<iostream>
using namespace std;

int main(){

    // character array:-
    // char arr[] = { 'a','p','p','l','e' };
    // for( int i=0; i<5; i++ ){
    //     cout<<arr[i];
    // }

    string s = "Harsh";
    cout<<s<<endl;

    // print only one word:-
    // string str;
    // cin>>str;
    // cout<<str<<endl;

    // for printing complete line:-
    // string str2;
    // getline(cin, str2);
    // cout<<str2<<endl;

    // strings methods:-
    int length = s.size(); // it will not count to the null character!
    cout<<length<<endl;

    string s1 = "harsh", s2 = "bhola";
    string s3 = s1.append(s2);
    cout<<s3<<endl;

    s1.push_back('p'); // harshp
    s1.pop_back(); // harsh

    int start = 0;
    int end = s.size()-1;
    while ( start<end )
    {
        swap(s[start], s[end]);
        start++, end--;
    }
    cout<<s<<endl;
    
}