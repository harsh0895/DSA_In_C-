// Write a program to convert Roman to Integer number and ans should be [1-3999].

#include<iostream>
using namespace std;

 int num( char c ){
        if( c=='I' ) return 1;
        else if( c=='V' ) return 5;
        else if( c=='X' ) return 10;
        else if( c=='L' ) return 50;
        else if( c=='C' ) return 100;
        else if( c=='D' ) return 500;
        else return 1000;
    }

    int romanToInt(string s) {
        int index = 0;
        int sum = 0;
        int n = s.size()-1;
        while( index < n ){
            if( num(s[index]) < num(s[index+1]) ){
                sum -= num(s[index]);
            }
            else{
                sum += num(s[index]);
            }
            index++;
        }
        sum += num(s[n]);
        return sum;
    }

int main(){
    string str = "LXIIIC"; 
    int ans = romanToInt(str);
    cout<<"After converting to Roman number in Integer is: "<<ans;
}