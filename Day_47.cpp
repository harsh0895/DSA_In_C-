// write a program to find the square root of x:-

#include<iostream>
using namespace std;

 int SQRT( int x ){
    int ans = -1;
    int start = 1;
    int end  = x;
    int mid;
    while ( start<=end ){
        mid = start + (end-start)/2;
        if( mid*mid <= x ){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
int main(){
    int x;
    cout<<"Enter x element: "<<endl;
    cin>>x;
    cout<<"The largest square root number is: "<<SQRT(x);
}