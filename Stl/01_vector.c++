/* 

Vector is  container. it's very Similar to a array. Array is constant is size but vector is dynamic. we can store data in vector like an array , vector able to incrise or decrise size in run time.

when we increase The size It doesn't mean that memory will increase by "1", what does that the Memory will create a vector, which is double size, and the value of previous factor will Copy into that new vector then we insert our new data when our size will increased
vec.push_back(3);

the Capacity of victor is number of elements that it currently hold and the capacity will increase by double every time in new level

*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{

// -------------------------------------------------- Different techniques of initialize vector -----------------------------------------------------

vector <int> vec; // now size of vec is == 0
vec.push_back(1);
vec.push_back(2); 
vec.push_back(3);
vec.push_back(4);
vec.push_back(5);
vec.emplace_back(9); //add data into the last same as push_back but it faster
vec.pop_back(); // delete the last data



for(int value : vec)
{
    cout<<"Value of vec: "<<value <<" ";
}
cout<<endl;

//vector<int>vec={1,2} //syntax
vector<int> v={1,2,3,4,5,6,7};
for(int val : v)
{
    cout<<val;
}
cout<<endl;

//vector<int>vec(3,10) where 3 is the size of the vector and 10 is the value
vector<int> va(3,2);

for( int noName:va)
{
    cout<<noName;
}
cout<<endl;

// if we have to initialize vec2 by vec1 then use vector<int>vec2(vec1)
vector<int>vec1 ={1,2,4,5,6,7};
vector<int> vec2(vec1);

for(int vaaa:vec2){
    cout<<vaaa;
}
cout<<endl;

//---------------------------------------------------------------functions of vector---------------------------------------------------------------

cout<<"size of vector(vec): "<<vec.size()<<endl; // tell the size of vector
cout<<"capacity of vector(vec): "<<vec.capacity()<<endl; // the the capacity of vector

//.at and vector[index] bot do same thing 
cout<<" value at some index in vector(vac): "<<vec[2]<<endl; 
cout<<" value at some index in vector(vac): "<<vec.at(2)<<endl;

//front &  back
cout << "front(vac) "<<vec.front()<<endl; // show front index of vector
cout<<"back(vac) "<<vec.back()<<endl; // show back last index of vector

// erase and insert in worst case the work o(n) time complexity
vector<int> vect={1,2,3,4,6,9};

// vect.erase(vect.begin()); // we use terators in vector to select the index to use erace junctions .begain in dicate "index 0" 
vect.erase(vect.begin()+2);// now target second index

for(int valu: vect)
{
    cout<<valu; // 2 erase
}
cout<<endl;


return 0;
}
