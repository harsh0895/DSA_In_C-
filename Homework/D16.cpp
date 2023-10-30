#include<iostream>
using namespace std;

int main(){

    // Que 1:- Convert decimal to number binary by using for loop:-

    int num = 13;
    int ans = 0;
    int mul;

    for( mul=1; num>0; mul=mul*10 ){
        int rem = num%2;
        num = num/2;
        ans = rem * mul + ans;
    }
    cout<<"binary number is: "<<ans<<endl;

     // Que 2:- Convert binary to number decimal by using for loop:-

    int binaryNum = 1101;
    int decimal = 0;
    for( mul=1; binaryNum>0; mul=mul*2 ){
        int rem = binaryNum%10;
        binaryNum = binaryNum/10;
        decimal = rem * mul + decimal;
    }
    cout<<"decimal number is: "<<decimal<<endl; 

     // Que 3:- Convert decimal to number octal by using for loop:-

    int dec = 115;
    int octal = 0;
    for( mul=1; dec>0; mul=mul*10 ){
        int rem = dec%8;
        dec = dec/8;
        octal = rem * mul + octal;
    }
    cout<<"Octal number is: "<<octal<<endl;

    // Que 4:- Convert Octal to number decimal by using for loop:-

    int OctalNum = 163;
    int decNum = 0;
    for( mul=1; OctalNum>0; mul=mul*8 ){
        int rem = OctalNum%10;
        OctalNum = OctalNum/10;
        decNum = rem * mul + decNum;
    }
    cout<<"Decimal number is: "<<decNum<<endl; 

}