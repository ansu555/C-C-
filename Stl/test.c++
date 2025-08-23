#include<bits/stdc++.h>
using namespace std;

int main(){
// vector<int>vec;
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.emplace_back(6);
// vec.pop_back ();

vector<int>vec={1,2,3,4,5,6};
vec.erase(vec.begin()+1,vec.begin()+3);

 
// cout<<vec.size()<<endl;
// cout<<vec.capacity()<<endl; 

for(int value:vec){
    cout<<value<<" "<<endl;
}
// cout<<"value at indx 2 is: "<<vec[2]<<" or "<<vec.at(2)<<endl;
// cout<<"front: "<<vec.front()<<" back: "<<vec.back()<<endl;
return 0;
}

