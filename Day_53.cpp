// Write a program to convert Integer to Roman number.

#include<iostream>
#include<vector>
using namespace std;

int lengthOfLongestSubstring(string s) {
        vector<bool>count(256,0);
        int first=0, second=0, len=0;
        while( second<s.size()){
            while( count[s[second]]==1 ){
                count[s[first]]=0;
                first++;
            }
            count[s[second]] = 1;
            len = max(len, second-first+1);
            second++;
        }
        return len;
}        
int main(){
    
    string str = "ababc";
    int ans = lengthOfLongestSubstring(str);
    cout<<"Longest substring is: "<<ans<<endl;
    
}