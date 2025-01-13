/*

-----------------------------------------Sequential data ----------------------------------------
---------------------------------------- Vector Key Notes ----------------------------------------

- Container Type: 
    - A vector is a dynamic array that can grow and shrink during runtime.
  
- Memory Management: 
    - When the vector size increases, it doubles its capacity and copies the old elements to the new memory block.

- Size vs. Capacity:
    - size(): Returns the number of elements.
    - capacity(): Returns the total number of elements that can be stored before needing reallocation.

- Important Functions:
    - push_back(value): Adds an element to the end of the vector.
    - emplace_back(value): Similar to push_back, but more efficient as it constructs the element in-place.
    - pop_back(): Removes the last element.
    - size(): Returns the current number of elements.
    - capacity(): Returns the allocated memory size.
    - clear(): Removes all elements from the vector.
    - front(): Returns the first element.
    - back(): Returns the last element.
    - erase(): Removes an element by position or a range of elements.
    - insert(): Inserts an element at a specific position.
    - resize(): Changes the size of the vector, adding default values if larger.
    - reserve(): Pre-allocates memory for a specified number of elements.
    - at(): Accesses an element with bounds checking.

---------------------------------------- Iterator Notes for Vector ----------------------------------------

- Iterators (begin(), end(), rbegin(), rend()):
    - begin(): Returns an iterator to the first element of the vector.
    - end(): Returns an iterator to one past the last element (don't dereference it!).
    - rbegin(): Returns a reverse iterator to the last element of the vector.
    - rend(): Returns a reverse iterator to one before the first element.
  
- Forward Iteration:
    - Use begin() and end() to iterate from the first to the last element.

- Reverse Iteration:
    - Use rbegin() and rend() to iterate from the last element to the first.

- Dereferencing:
    - Use *it to access the value an iterator points to.
  
- Warning with end():
    - Dereferencing end() is undefined behavior as it points to one past the last element.

---------------------------------------- List Key Notes ----------------------------------------

- Container Type:
    - A list is a doubly linked list, unlike a vector which is a dynamic array.

- Efficient Insertion and Deletion:
    - Inserting or deleting elements is faster than vectors when it’s not at the end because the list allows constant-time insertions or deletions anywhere.

- Key Functions:
    - push_back(value): Adds an element to the end of the list.
    - push_front(value): Adds an element to the front of the list.
    - pop_back(): Removes the last element.
    - pop_front(): Removes the first element.
    - insert(): Inserts an element at a specific position.
    - erase(): Removes an element by position.
    - size(): Returns the number of elements.
    - clear(): Removes all elements from the list.
    - front(): Returns the first element.
    - back(): Returns the last element.

    ---------------------------------------- Pair Notes ----------------------------------------

1. Definition:
   - A `pair` is a template class from the STL (Standard Template Library) defined in the `<utility>` header.
   - It stores two values together, which may or may not be of the same type.
   - Members of a pair: `first` and `second`.
   
2. Key Use Cases:
   - To group two related values logically together. Useful when you want to store a pair of data that belongs together.
   - Commonly used in containers like `map` and `set`, where you store key-value pairs.

3. Nested Pairs:
   - A `pair` can store another `pair` as its second value, which allows for more complex relationships or data structures.
   - Example: `pair<int, pair<int, int>>` allows you to store a pair of integers and another pair.

4. Arrays of Pairs:
   - You can create arrays of pairs to store multiple pairs of values.
   - Example: `pair<int, int> arr[] = {make_pair(1, 2), make_pair(4, 6), make_pair(9, 0)}` stores an array of pairs.

5. Accessing Elements:
   - To access the first and second values, use `.first` and `.second` respectively.
   - In a nested pair, use `.second.first` and `.second.second` to access the inner pair's values.

6. Example Code:
   - Creating a pair: `pair<int, int> p = make_pair(1, 3);`
   - Accessing values: `cout << p.first << " " << p.second;`

OUTPUT:
   1 3        // Output from the simple pair
   1 3 4      // Output from the nested pair
   6          // Accessing the second element of the second pair in the array

---------------------------------------- List vs Vector ----------------------------------------

- Vector:
    - Elements are stored in a contiguous memory block.
    - Faster access by index (constant time).
    - Slower insertions/deletions in the middle or front (due to shifting elements).
    - push_back() may involve reallocating memory when the vector grows.

- List:
    - Elements are stored in non-contiguous memory locations (linked list).
    - No direct access by index (linear time for accessing an element).
    - Faster insertions and deletions anywhere in the list (constant time).
    - Memory usage is higher due to the need for storing pointers for each element.

---------------------------------------- Deque (Double-Ended Queue) ----------------------------------------

- Container Type:
    - A deque is similar to a vector but allows efficient insertions and deletions at both ends.
  
- Functions:
    - push_back() and push_front(): Allows adding elements at both ends.
    - pop_back() and pop_front(): Allows removing elements from both ends.
    - Provides random access, similar to vectors.

---------------------------------------- Key Differences between List and Deque ----------------------------------------

- Memory Layout:
    - List: Doubly linked list; non-contiguous memory.
    - Deque: Similar to vector but stores data in multiple blocks, allowing constant-time insertions at both ends.
  
- Performance:
    - List: Better for frequent insertions and deletions at arbitrary positions.
    - Deque: Better for frequent insertions and deletions at both ends with random access.

*/
