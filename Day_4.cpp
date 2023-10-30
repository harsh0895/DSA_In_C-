// If Else Statement in C++ || Loops in C++:-

#include<iostream>
using namespace std;

int main(){
// Que 1:-

    // int a, b;
    // cout<<"Enter a: "<<endl;
    // cin>>a; 
    // cout<<"Enter b: "<<endl;
    // cin>>b;
    // int sum = a+b;
    // cout<<"The sum of a and b is: "<<sum<<endl;

// TYPECASTING IN C++:-

    // int c = 66;
    // char ch = 'b';
    // c = ch;
    // ch = c;
    // cout<<ch;

// If Else condition In C++:-
// Que 2:-

    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;
    // if( age>=18 ){
    //     cout<<"Yes, you can drive!!";
    // }
    // else{
    //     cout<<"you can not drive!! ";
    // }

// Que 3:-

    // int num;
    // cout<<"Enter your number: ";
    // cin>>num;
    // if( num%2==0 ){
    //     cout<<"Your number is Even!!";
    // }
    // else{
    //     cout<<"Your number is Odd!!";
    // }

// Que 4:-
// Nested if else:-

    // int n;
    // cout<<"Enter your number: ";
    // cin>>n;
    // if( n>-1 ){
    //     if( n==0 ){
    //         cout<<"Your number is equal to zero!!";
    //     }
    //     else{
    //     cout<<"your number is positive!!;";
    //     }
    // }
    // else if( n<0 ){
    //     cout<<"your number is negative!!";
    // }
    // else{
    //     cout<<"Your input is wrong!!"
    // }

// Que 5:-

    // char checkVowel;
    // cout<<"Enter your character: ";
    // cin>>checkVowel;
    // if( checkVowel=='a' || checkVowel=='e' || checkVowel=='i' || checkVowel=='o' || checkVowel=='u'){
    //     cout<<"It is a Vowel!!";
    // }
    // else{
    //     cout<<"It is not Vowel!!";
    // }

// Que 6:-
// Switch Case statement:-

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
     
}