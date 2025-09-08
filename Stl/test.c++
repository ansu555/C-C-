#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    //vector<int>v={1,2,3,45,6};
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout<<"front element: "<<v.front()<<endl;
    cout<<"Back element:"<<v.back()<<endl;
    //iterator
    vector<int>::iterator beginItr=v.begin();
    vector<int>::iterator endItr=v.end();
    cout<<*beginItr<<endl;
    cout<<*endItr<<endl;

    // for(vector<int>::iterator Itr=v.begin(); Itr <v.end();Itr++){
    //     cout<<*Itr<<" ";
    // }
    cout<<"Using iterator"<<endl;
    for(auto Itr=v.begin(); Itr !=v.end();Itr++){
        cout<<*Itr<<" ";
    }
    cout<<endl;

    //for each loop
    cout<<"Using for each loop"<<endl;
    for(auto i:v){
        cout<<i<<" ";  
    }
    cout<<endl;

    //reverse iterator
    auto rbegin=v.rbegin();
    auto rend=v.rend();
    cout<<"Using reverse iterator"<<endl;
    for(auto itr=rbegin;itr<rend;itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    vector<int>vec(5);
    cout<<"size of vector vec: "<<vec.size()<<endl;
    cout<<"value of vector vec:"<<endl;
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<"Erase element at index 2"<<endl;
    v.erase(v.begin()+2);
    
    for(auto f:v){
        cout<<f<<" ";
    }
cout<<"inser 10  at the idex 2:"<<endl;
v.insert(v.begin()+2,10);
for(auto f:v){
    cout<<f<<" ";
}
cout<<endl;
vector<int> v1={1,2,3};
vector<int> v2={4,5,6};
swap(v1,v2);
for(auto i:v1){
    cout<<i<<" ";
}
cout<<endl;
} // Close explainVector
//pair
void pairExplain(){
    pair<int,int> p= {1,2};
    cout<<"first element: "<<p.first<<endl;
    cout<<"second element: "<<p.second<<endl;
    pair<int,char>p2={1,'A'};
    cout<<"first element: "<<p2.first<<endl;
    cout<<"second element: "<<p2.second<<endl;

    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {4, 5}};
    
    cout << "vector_pair: ";
    for (auto pair : vec) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }
}
//list
void explainList(){
//list allows you to push at front, which you can do in vector.
list<int>ls={6,7,8};
ls.push_front(5);
ls.push_back(9);
for(auto i:ls){
    cout<<i<<" ";
}
cout<<endl;
}
//stack
void explainStack(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);      
    s.push(5);
    s.push(6);

    cout<<"top element: "<<s.top()<<endl;
    s.pop();
    cout<<"top element after pop: "<<s.top()<<endl;

    while(s.empty() == false){
        cout<<s.top()<<" ";
        s.pop();
    }
}
//queue
void explainQUeue(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout<<"front element: "<<q.front()<<endl;
    cout<<"back element: "<<q.back()<<endl;
    q.pop();
    cout<<"front element after pop: "<<q.front()<<endl;

    while(q.empty() == false){
        cout<<q.front()<<" ";
        q.pop();
    }
}
//Priority queue
void explainPriorityQueue(){
    //maximum heap
    priority_queue<int> pq;
    pq.push(10);
    pq.push(3);
    pq.push(245);
    pq.push(5);
    pq.push(44);
    cout<<"Top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element after pop: "<<pq.top()<<endl;

    while(pq.empty() == false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    //minimum heap
    priority_queue<int,vector<int>,greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(3);        
    minHeap.push(245);
    minHeap.push(5);
    minHeap.push(44);
    cout<<"Top element of minHeap: "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"Top element of minHeap after pop: "<<minHeap.top()<<endl;
    while(minHeap.empty() == false){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    cout<<endl;
}
//set
void explainSet(){
    //store only unique element in sorted order
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(6);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Is 5 present: "<<s.count(5)<<endl;
    cout<<"Is 10 present: "<<s.count(10)<<endl;

    auto it=s.find(3);
    if(it !=s.end()){
        cout<<"3 is present in set"<<endl;
    }
    else{
        cout<<"3 is not present in set"<<*it<<endl;
    }

    //erase
    s.erase(5);
    cout<<"After erasing 5"<<endl;
     for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    //lower bound and upper bound
    auto it1=s.lower_bound(7);
    auto it2=s.upper_bound(4);
    cout<<"lower bound of 7: "<<*it1<<endl;
    cout<<"upper bound of 4: "<<*it2<<endl;
}
//Multiset
void explainMultiset(){
multiset<int>set;
set.insert(1);
set.insert(1);
set.insert(1);
set.insert(2);
set.insert(2);
set.insert(3);
set.insert(3);      
set.insert(0); 
auto it=set.find(1);

for(auto i:set){
    cout<<i<<" ";
}
cout<<endl;
//it will erase every "1" in the set
auto it2=set.erase(1);
for(auto i:set){
    cout<<i<<" ";
}
cout<<endl;
//to erase only one "2"
auto it3=set.erase(set.find(2));
for(auto i:set){
    cout<<i<<" ";
}
cout<<endl;
}
//unordered set
void explainUnorderedSet(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(6);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Is 5 present: "<<s.count(5)<<endl;
    cout<<"Is 10 present: "<<s.count(10)<<endl;

    auto it=s.find(3);
    if(it !=s.end()){
        cout<<"3 is present in set"<<endl;
    }
    else{
        cout<<"3 is not present in set"<<*it<<endl;
    }

    //erase
    s.erase(5);
    cout<<"After erasing 5"<<endl;
     for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}
//Map
void explainMap(){
map<int,string>m;
m[1]="abc";
m[2]="bcd";
m[3]="cde"; 
m[0]="def";
m.insert({5,"xyz"});
for(auto i:m){
    cout<<i.first<<"-"<<i.second<<endl;
}
auto it= m.find(3);
cout<<it->first<<"-"<<it->second<<endl;
// cout<<(*it).first<<"-"<<(*it).second<<endl;
}
//underordered map
void explainUnorderedMap(){
    cout<<"same as map but unordered"<<endl;
    //similar to unordered_set
}
//Multimap
void explainMultimap(){
    multimap<int,string>m;
    m.insert({1,"Abc"});
    m.insert({1,"Bcd"});
    m.insert({2,"Cde"});
    m.insert({2,"Def"});
    m.insert({3,"Efg"});
    m.insert({3,"Fgh"});
    m.insert({3,"Ghi"});
    for(auto i:m){
        cout<<i.first<<"-"<<i.second<<endl;
    }   
}
int main()
{
    // explainVector();
    //pairExplain();
    //explainList();
    //explainStack();
    //explainQUeue();
    //explainPriorityQueue(); 
    //explainSet();
    //explainMultiset();
    //explainUnorderedSet();
    //explainMap();
    explainMultimap();
    return 0;
}