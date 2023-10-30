#include<iostream>
using namespace std;

// 2:- Write a program to check the given number is Armstrong number or not.

int countDigit( int num){
    int count = 0;
    while ( num!=0 )
    { 
        num = num/10;
        count++;
    }
    return count;
}

int checkArmstrong( int num, int digit ){
    int ans = 0;
    while ( num!=0 )
    {
        int rem = num%10;
        num = num/10;
        int i=1;
        int power = 1;
        while (i<=digit )
        {
            power = power * rem;
            i++;
        } 
        ans = power + ans;
    }
    return ans;
}
int main(){

    int num = 153;
    // cout<<"Enter your number: ";
    // cin>>num;
    int digit = countDigit(num);
    cout<<"Total number of digit is: "<<digit<<endl;

    int arm = checkArmstrong(num, digit);
    if( arm == num ){
        cout<<"Your number is Armstrong number!"<<endl;
    }
    else{
        cout<<"Your number is not a Armstrong number!";
    }

}