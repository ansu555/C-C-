#include<iostream>
#include<utility>
#include<vector>

using namespace std;
int main()
{
    vector<int>vec; //size is "0" now
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(5);

    cout<<vec.size()<<endl;  
    cout<<vec.capacity()<<endl;  
    for(int i : vec)
    {
        cout<<i <<" ";
    }

    return 0;

}

