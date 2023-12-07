#include<iostream>
using namespace std;

int func( int n ){
    // base case:-
    if( n==0 ){
        cout<<"Hello brother!";
        return 0;
    }
    cout<<n<<" hello!"<<endl;
    func(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    func(n);
}