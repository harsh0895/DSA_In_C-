// KMP ALGORITHM:-
// longest common prefix suffix:-

#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str = "ABAB";
    vector<int>lps(str.size(), 0);
    int pre = 0, suf = 1;
    while( suf<str.size() ){
        // match
        if( str[pre]==str[suf] ){
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else{
            if(pre==0 ){
                lps[suf] = 0;
                suf++;
            }
            else{
                pre = lps[pre-1];
            }
        }
    }
    int ans = lps[str.size()-1];
    cout<<"Longest common prefix ans suffix is: "<<ans;
}