#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
set<int> s;

s.insert(5);
    s.insert(10);
    s.insert(5);  // Duplicate, won't be added
    s.insert(4);
    s.insert(8);
    s.insert(10);
    s.insert(5);
cout<< s.size()<<endl;
    for(int val: s){
        cout << val << " ";
    }

    return 0;

} 