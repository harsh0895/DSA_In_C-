#include<iostream>
using namespace std;

// 1:- convert a small char to capital char.

char convert( char name ){
    char ans = name - 'a' + 'A';
    return ans;
}

int main(){

    char name;
    cout<<"Enter your character: ";
    cin>>name;
    cout<<"Your char after converting: "<<convert(name)<<endl;
    
}