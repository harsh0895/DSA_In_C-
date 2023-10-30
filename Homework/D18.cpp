#include<iostream>
using namespace std;

 // Que 1:- Find the cube of a number using Function.

int cubeOfNum( int n ){
    return n*n*n;
}

// Que 2:- There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

void change( int &a, int &b, int &c){
    a = b;
    b = c;
    c = a;
}

// Que 3:- Swap 2 numbers a, b without using extra variables.

void swap( int a, int b){
    cout<<"Before swapping a "<<a<<" b "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping a "<<a<<" b "<<b<<endl;
}

int factorial( int n ){
    int fac = 1;
    for( int i=1; i<=n; i++ ){
        fac = fac * i;
    }
    return fac;
}

int nCr( int n, int r){
    if( n<r){
        return 0;
    }
    else{
        return factorial(n) / factorial(r) * factorial( n-r );
    }
}

int main(){

    // 1:-
    int num = 2;
    cout<<"Cube is: "<<cubeOfNum(num)<<endl;

    // 2:-
    int a=5, b=10, c=15;
    cout<<a<<" "<<b<<" "<<c<<endl;
    change( a,b,c);
    cout<<a<<" "<<b<<" "<<c<<endl;

    // 3:-
    int n1 = 5;
    int n2 = 10;
    swap( n1, n2 );

    // 4:-
    int n=5, r=4;
    int result = nCr(n,r);
    cout<<result;
    

}
