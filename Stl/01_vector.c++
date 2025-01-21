/*

Vector is  container. it's very Similar to a array. Array is constant is size but vector is dynamic. we can store data in vector like an array , vector able to incrise or decrise size in run time.

when we increase The size It doesn't mean that memory will increase by "1", what does that the Memory will create a vector, which is double size, and the value of previous factor will Copy into that new vector then we insert our new data when our size will increased
vec.push_back(3);

the Capacity of victor is number of elements that it currently hold and the capacity will increase by double every time in new level

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // ----------------------------------------------- Different techniques to initialize a vector -----------------------------------------------

    vector<int> vec;     // Initialize an empty vector of integers. Currently, size = 0.
    vec.push_back(1);    // Adds 1 to the end of the vector.
    vec.push_back(2);    // Adds 2 to the end of the vector.
    vec.push_back(3);    // Adds 3 to the end of the vector.
    vec.push_back(4);    // Adds 4 to the end of the vector.
    vec.push_back(5);    // Adds 5 to the end of the vector.
    vec.emplace_back(9); // Similar to push_back but faster as it directly constructs the value at the end.
    vec.pop_back();      // Removes the last element (9 in this case).

    for (int value : vec) // Enhanced for loop to iterate over the vector.
    {
        cout << "Value of vec: " << value << " "; // Output the elements of vec: 1 2 3 4 5
    }
    cout << endl;

    // Initialize a vector using a list of values
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    for (int val : v)
    {
        cout << val; // Output: 1234567
    }
    cout << endl;

    // Initialize a vector with a fixed size and default value
    vector<int> va(3, 2); // Creates a vector of size 3, all values initialized to 2.

    for (int noName : va)
    {
        cout << noName; // Output: 222
    }
    cout << endl;

    // Initialize a vector by copying another vector
    vector<int> vec1 = {1, 2, 4, 5, 6, 7};
    vector<int> vec2(vec1); // vec2 is a copy of vec1.

    for (int vaaa : vec2)
    {
        cout << vaaa; // Output: 124567
    }
    cout << endl;

    // ----------------------------------------------- Functions of vector -----------------------------------------------

    cout << "Size of vector(vec): " << vec.size() << endl;         // Outputs the number of elements in vec: 5.
    cout << "Capacity of vector(vec): " << vec.capacity() << endl; // Outputs the current capacity of vec.

    // Access elements using index and .at() method
    cout << "Value at index 2 in vector(vec): " << vec[2] << endl;    // Output: 3.
    cout << "Value at index 2 in vector(vec): " << vec.at(2) << endl; // Output: 3.

    // Front and back elements
    cout << "Front(vec): " << vec.front() << endl; // Output: 1 (first element).
    cout << "Back(vec): " << vec.back() << endl;   // Output: 5 (last element).
 
    // Erase elements
    vector<int> vect = {1, 2, 3, 4, 6, 9};
    vect.erase(vect.begin());                       // Removes the first element (index 0).
    vect.erase(vect.begin() + 2);                   // Removes the element at index 2 (after previous erase, now 4).
    vect.erase(vect.begin() + 1, vect.begin() + 3); // Removes a range (indices 1 to 2 inclusive).

    // Insert elements
    vect.insert(vect.begin() + 1, 7); // Inserts 7 at index 1.

    // Clear the vector
    vect.clear(); // Removes all elements but keeps the capacity intact.

    for (int valu : vect)
    {
        cout << valu;
    }
    cout << "Size of vect: " << vect.size() << endl;         // Output: 0 (all elements removed).
    cout << "Capacity of vect: " << vect.capacity() << endl; // Output: 6 (capacity remains).

    // Check if vector is empty
    cout << "Is vect empty? " << vect.empty() << endl; // Output: 1 (true).

    return 0;
}

    // ----------------------------------------------- Study Notes -----------------------------------------------

    /*
    - Size (`size()`): Returns the number of elements in the vector.
    - Capacity (`capacity()`): Returns the allocated memory size, which is the maximum number of elements the vector can hold before needing reallocation.
    - Empty (`empty()`): Returns `true` if the vector is empty, `false` otherwise.
    - Push_back (`push_back()`): Adds an element to the end of the vector.
    - Emplace_back (`emplace_back()`): Adds an element to the end of the vector by constructing it in place.
    - At (`at()`): Accesses an element at the given index with bounds checking, throws an exception if out of bounds.
    - Indexing (`[]`): Accesses an element at the given index without bounds checking.
    - Front (`front()`): Accesses the first element.
    - Back (`back()`): Accesses the last element.
    - Pop_back (`pop_back()`): Removes the last element from the vector.
    - Erase (`erase()`): Removes an element by position or range.
    - Insert (`insert()`): Inserts an element at a specific position.
    - Clear (`clear()`): Removes all elements but keeps the capacity intact.
    - Resize (`resize()`): Resizes the vector, adding default-initialized elements if the new size is larger.
    - Reserve (`reserve()`): Pre-allocates memory for a specified number of elements.
   
    - Key Differences:
        - Size vs Capacity: `size()` returns the number of elements, while `capacity()` returns the allocated space for future elements.
        - Push_back vs Emplace_back: `emplace_back()` is more efficient for complex types, as it constructs the element in place.
        - Erase vs Clear: `erase()` removes specific elements, while `clear()` removes all elements.
        - At vs Indexing: `at()` checks bounds and throws an exception if out of range, while `[]` does not check bounds.
    */

