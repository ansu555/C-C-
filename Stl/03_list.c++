
// List is a sequential container like vectors. but internaly implented with double linked list

#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int> l;

    l.push_back(1);    // Adds 1 to the end of the list: [1]
    l.push_back(2);    // Adds 2 to the end of the list: [1, 2]
    l.push_front(3);   // Adds 3 to the front of the list: [3, 1, 2]
    l.push_front(4);   // Adds 4 to the front of the list: [4, 3, 1, 2]

    for(int val : l)
    {
        cout << val; // Output: 4321
    }

    return 0;
}

// all properties are same as vector