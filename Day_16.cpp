// Conversions in binary number:-

#include<iostream>
using namespace std;

int main(){

    // Decimal to Binary:-

    // int decimalNum = 13;
    // int decimalNum;
    // cout<<"Enter your decimal number: ";
    // cin>>decimalNum;
    // int rem; 
    // int binary=0;
    // int mul=1;
    
    // while ( decimalNum>0 )
    // {
    //     rem = decimalNum%2;
    //     // rem = decimalNum & 1 => We can also use bitwise operator!!
    //     decimalNum = decimalNum/2;
    //     binary = rem * mul + binary;
    //     mul = mul*10;
    // }
    // cout<<"After converting in Binary number is: "<<binary<<endl;

    // binary to decimal:-

    int binaryNum =1101;
    // cout<<"Enter your binary number: ";
    // cin>>binary;
    int rem;
    int ans = 0;
    int mul=1;
    while ( binaryNum>0 )
    {
        rem = binaryNum%10;
        binaryNum = binaryNum/10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout<<"After converting binary to decimal number is: "<<ans;
    
}