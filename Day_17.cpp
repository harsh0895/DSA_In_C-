// Practice programs on Leetcode:-

#include<iostream>
using namespace std;

int main(){

    // Que 1:- Check given year is a leap year or not:-

    int year = 2026;
    // cout<<"Enter your year: ";
    // cin>>year;

    if( year%400==0 ){
        cout<<"This is a leap year!"<<endl;
    }
    else if( year%4==0 && year%100!=0 ){
        cout<<"This is a leap year!"<<endl;
    }
    else{
        cout<<"This is not a leap year!"<<endl;
    }

    // Que 2:- complement of a given binary number:-

    int num = 13;
    int rem;
    int ans=0, mul=1;
    
    if( num==0 ){
        cout<<1<<endl;
        return 0;
    }

    while ( num!=0 )
    {
        rem = num%2;
        rem = rem^1; // 0^1=1 || 1^1=0
        num = num/2;
        ans = rem*mul + ans;
        mul = mul*2;
    }
    cout<<"Complement is: "<<ans;
    

}