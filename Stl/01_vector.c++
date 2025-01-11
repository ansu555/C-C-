#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector <int> vec; // now size of vec is == 0
vec.push_back(1);
vec.push_back(2); // when we increase The size It doesn't mean that memory will increase by "1", what does that the Memory will create a vector, which is double size, and the value of previous factor will Copy into that new vector then we insert our new data when our size will increased
vec.push_back(3);
vec.push_back(4);
vec.push_back(5);
vec.push_back(6); //the Capacity of victor is number of elements that it currently hold and the capacity will increase by double every time in new level
vec.emplace_back(9); //add data into the last same as push_back but it faster
vec.pop_back(); // delete the last data

cout<<"size of vector: "<<vec.size()<<endl;
cout<<"capacity of vector: "<<vec.capacity()<<endl;

for(int value : vec)
{
    cout<<value<<" ";
}
cout<<endl;

//.at and vector[index] bot do same thing 

cout<<" value at some index in vector: "<<vec[2]<<endl; 
cout<<" value at some index in vector: "<<vec.at(2);

//front &  back

cout << "front"<<vec.front()<<endl;
cout<<"back"<<vec.back()<<endl; 
 
return 0;
}

/* 

Vector is  container. it's very Similar to a array. Array is constant is size but vector is dynamic. we can store data in vector like an array , vector able to incrise or decrise size in run time

*/

