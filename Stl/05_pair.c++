 #include <iostream>
#include <utility>  // for pair
#include <vector>
using namespace std;
 
int main()
{
    pair<int, int> p = {1, 3};
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {4, 5}};
    
    cout << "vector_pair: ";
    for (const auto& pair : vec) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    cout << endl;

    cout << "first: " << p.first << " " << "second: " << p.second << endl;
    return 0;
}