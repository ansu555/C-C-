#include<iostream>
#include<vector> // Required for using vector
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7}; 

    // Accessing the beginning of the vector using an iterator
    // `begin()` points to the first element of the vector (index 0).
    cout << "Beginning of vector(v): " << *(v.begin()) << endl; // Dereference the iterator to get the value at index 0. Output: 1.

    // Accessing the end of the vector using an iterator
    // `end()` does NOT point to the last element; it points to one past the last element.
    cout << "End of vector(v): " << *(v.end()) << endl; // Undefined behavior! Dereferencing `v.end()` is invalid.

    // Forward loop using iterators
    // `v.begin()`: Points to the first element.
    // `v.end()`: Points to one past the last element.
    cout << "Forward iteration: ";
    // if we don't use auto function then we have to create a iterator vector<int>::iterator it;
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " "; // Dereference the iterator to access the value.
    }
    cout << endl;

    // Reverse loop using reverse iterators
    // `v.rbegin()` starts at the last element of the vector.
    // `v.rend()` is one before the first element.
    cout << "Reverse iteration: ";
    for(auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *(it) << " "; // Dereference the reverse iterator to access the value.
    }
    cout << endl;

    return 0;
}

// ----------------------------------------------- Study Notes -----------------------------------------------
    
    /*
    - Iterators (`begin()`, `end()`, `rbegin()`, `rend()`): 
        - `begin()`: Returns an iterator to the first element of the vector.
        - `end()`: Returns an iterator to one past the last element (not valid to dereference).
        - `rbegin()`: Returns a reverse iterator to the last element of the vector.
        - `rend()`: Returns a reverse iterator to one before the first element.
    - Forward Iteration: Use `begin()` and `end()` to iterate from the first to the last element.
    - Reverse Iteration: Use `rbegin()` and `rend()` to iterate from the last element to the first.
    - Dereferencing Iterators: Use `*` to access the value that the iterator points to.
    - Warning with `end()`: Dereferencing `end()` is undefined behavior, as it points to one past the last element.
    - Auto keyword: In modern C++, `auto` can be used for iterator types to simplify the code.
    */