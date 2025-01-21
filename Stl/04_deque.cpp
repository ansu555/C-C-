// double ended queue

#include <iostream>
#include <vector>
#include <list>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);    // Adds 1 to the end of the list: [1]
    d.push_back(2);    // Adds 2 to the end of the list: [1, 2]
    d.push_front(3);   // Adds 3 to the front of the list: [3, 1, 2]
    d.push_front(4);   // Adds 4 to the front of the list: [4, 3, 1, 2]

    for(int val : d)
    {
        cout << val; // Output: 4321
    }

    return 0;
}