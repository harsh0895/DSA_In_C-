// What is STL and vector in C++:-

#include<iostream>
#include<vector>
using namespace std;

int main(){
    // create vector:-
    vector<int>v;
    vector<int>v1(5,1);

    // size and capacity:-
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;

    // update value:-
    v[1] = 5;
    v1.push_back(6);
    cout<<"size of v1: "<<v1.size()<<endl;
    cout<<"capacity of v1: "<<v1.capacity()<<endl;

    // vector<int>v2 = {1,2,3,4,5};
    // for( int i=0; i<v2.size(); i++){
    //     cout<<v2[i];
    // }

    // delete value from vector:-
    vector<int>v3;
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);
    v3.push_back(4);
    v3.push_back(5);
    v3.pop_back();
    cout<<"size of v3: "<<v3.size()<<endl;
    cout<<"capacity of v3: "<<v3.capacity()<<endl;

     for( int i=0; i<v3.size(); i++){
        cout<<v3[i]<<endl;
    }

    v3.erase(v3.begin() + 1);// it will remove value from 1 index
    v3.insert(v3.begin() + 1,20);// it will add value in 1 index
    cout<<"size of v3: "<<v3.size()<<endl;
    cout<<"capacity of v3: "<<v3.capacity()<<endl;
     for( int i=0; i<v3.size(); i++){
        cout<<v3[i]<<endl;
    }

    // for printing:-
    // for( auto i: v3){
    //     cout<<i<<" "<<endl;
    // }

    // front, empty or back:-
    cout<<v3.front()<<endl;
    cout<<v3.back()<<endl;
    cout<<v3.empty()<<endl;

    v3.clear();
    cout<<"size of v3: "<<v3.size()<<endl;
    cout<<"capacity of v3: "<<v3.capacity()<<endl;

    // how to sort an vector elements:-

    vector<int>arr;
    arr.push_back(5);
    arr.push_back(55);
    arr.push_back(45);
    arr.push_back(15);
    arr.push_back(25);

    // sort in increasing order:-
    // sort(arr.begin(), arr.end());
    // cout<<"After sorting: ";
    // for( int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<endl;
    // }

    // how to search an element:-
    // cout<<binary_search(arr.begin(), arr.end(), 55);
}