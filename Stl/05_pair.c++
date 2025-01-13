/*
STL Components:
1. Algorithm 
2. Containers
3. Functions
4. Iterators
*/

#include <iostream>
#include <utility>  // for pair
using namespace std;

void explainPair()
{
    // A pair is a container in STL used to store two values together.
    pair<int, int> p = make_pair(1, 3); // Creating a pair using make_pair
    // Key points:
    // - p.first holds the first value (1).
    // - p.second holds the second value (3).
    cout << p.first << " " << p.second << endl; // Output: 1 3

    // Nested pairs can hold more complex relationships
    // Here, p2 stores an integer and another pair as its second element
    pair<int, pair<int, int> > p2 = make_pair(1, make_pair(3, 4));
    // Key points:
    // - p2.first = 1
    // - p2.second.first = 3
    // - p2.second.second = 4
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; // Output: 1 3 4

    // Arrays of pairs are useful for storing related data sets
    pair<int, int> arr[] = {make_pair(1, 2), make_pair(4, 6), make_pair(9, 0)};
    // Key points:
    // - arr[0] = {1, 2}, arr[1] = {4, 6}, arr[2] = {9, 0}
    // - arr[1].second accesses the second element of the second pair in the array
    cout << arr[1].second << endl; // Output: 6
}

int main()
{
    explainPair(); // Function to demonstrate pair usage
    return 0;
}

/*
NOTES:
1. A `pair` is a template class in the STL defined in the `<utility>` header.
   - It can store two values (can be of the same or different types) together.
   - Members: `first` and `second`.

2. Key Use Cases:
   - To group two related values logically.
   - Often used in STL containers like `map` or `set`.

3. Nested Pairs:
   - A `pair` can itself store another `pair` as one of its elements to represent more complex relationships.

4. Arrays of Pairs:
   - Useful when you need to maintain a list of paired values.

OUTPUT:
1 3          // Output from the first simple pair
1 3 4        // Output from the nested pair
6            // Accessing the second element of the second pair in the array
*/
