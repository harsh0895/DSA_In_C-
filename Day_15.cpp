// While and Do while Loop || Switch || break || Continue in C++:-

#include<iostream>
using namespace std;

int main(){

    // While loop:-

    int num;
    cout<<"Enter your number: ";
    cin>>num;
    int i=1;

    while (i<=num)
    {
        cout<<i<<endl;
        i++;
    }

    // print even number:-

    // while( i<=num ){
    //     if( i%2==0 ){
    //         cout<<i<<endl;
    //     }
    //     i++;
    // }
    
    // do while loop:- it will execute will be once!

    int m = 20;/
    do
    {
        cout<<m<<endl;
        m++;
    } while (m<=10);
    
    // print odd number:-

    // int odd=1;
    // do
    // {
    //     if( odd%2!=0 ){
    //         cout<<odd<<endl;
    //     }
    //     odd++;
    // } while ( odd<=num );

    // Break:-

    while( i<=num )
    {
        if( i==4 ){
            break;
        }
        cout<<i<<endl;
        i++;
    }

    // Continue:-

    while( i<=num )
    {
        i++;
        if( i==4 ){
            continue;
        }
        cout<<i<<endl;
    }
    
    



}