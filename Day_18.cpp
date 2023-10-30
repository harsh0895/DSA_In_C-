// Function in C++:-

#include<iostream>
using namespace std;

void greet(){
    cout<<"Hello user, Good Morning!";
}

int addTwo( int a, int b ){
    return a+b;
}

// pass by value:-

void passByValue( int n){
     n++;
}

void passByRef( int &n){
     n++;
}

int main(){

    // int a;
    // cout<<"Enter a: "<<endl;
    // cin>>a;
    // int b;
    // cout<<"Enter b: "<<endl;
    // cin>>b;
    // cout<<"sum is: "<<addTwo(a,b)<<endl;

    // greet();

    int a = 4;
    // cout<<a<<endl; // 4
    // passByValue(a);
    // cout<<a<<endl; // 4

    cout<<a<<endl; // 4
    passByRef(a);
    cout<<a<<endl; // 5
    
}