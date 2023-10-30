#include<iostream>
using namespace std;

int main(){

    // Que 1:- print factorial of a given number

    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int fac = 1;
    int i=1;
    while( i<=n ){
        fac = fac*i;
        i++;
    }
    cout<<"The factorial of given number is: "<<fac<<endl;

    // Que 2:-
    
    for( int i=1; i<=n; i++ ){
        if( i%3==0 && i%5==0 ) continue;
        cout<<i<<endl;
    }

    // Que 3:-

    int dayNum;
    cout<<"Enter your day number: ";
    cin>>dayNum;
    switch ( dayNum )
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thusday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    
    default:
        cout<<"Invalid Day Number!!";
        break;
    }
     
    // Que 4:- check the given number is prime of not

    int num;
    cout<<"Enter your number: ";
    cin>>num;
    int p=2;

    if( num<2 ){
        cout<<"Not prime"<<endl;
        return 0;
    }
    else{ 
        while ( p<num )
        {
            if( num%p==0 ){
                cout<<"Not prime!"<<endl;
                return 0;
            }
            p++;
        }
        cout<<"This is prime!";
    }
}