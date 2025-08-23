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

---------------------------------------- Map Key Notes ----------------------------------------

- Container Type:
    - `map<Key, T>` is an ordered associative container (balanced binary tree, typically red‑black).
    - Keys are unique. Use `multimap` if duplicate keys are required.
    - Stores elements as `pair<const Key, T>`.

- Complexity:
    - Most operations (find, insert, erase, lower_bound, upper_bound) are O(log n).
    - `unordered_map` is hash-based (average O(1)) — choose it when order is not required.

- Key Functions / Members:
    - insert(value) / insert({k, v}): inserts element; returns `pair<iterator,bool>` indicating success.
    - emplace(args...): constructs element in-place.
    - emplace_hint(pos, args...): uses hint iterator to optimize insertion.
    - operator[](key): returns reference to mapped value; inserts default value if key absent.
    - at(key): like operator[] but throws `out_of_range` if key absent.
    - find(key): returns iterator to element or `end()`.
    - count(key): returns 0 or 1 for `map` (number of elements with that key).
    - erase(key) / erase(iterator): remove elements.
    - size(), empty(), clear().

- Range queries and ordering:
    - begin(), end(), rbegin(), rend(): iterate in ascending key order.
    - lower_bound(key): first element not less than key.
    - upper_bound(key): first element greater than key.
    - equal_range(key): returns pair of (lower_bound, upper_bound).

- Iteration and access:
    - Access key and value with `it->first` and `it->second`.
    - Structured bindings: `for (auto const& [k,v] : m) { ... }`.
    - Since keys are `const`, you cannot modify `it->first`.

- Insertion return value:
    - `auto [it, inserted] = m.insert({k,v});` — `inserted` is `true` if insertion happened.

- Customization:
    - `map<Key, T, Compare>`: provide a custom comparator to change ordering.
    - `unordered_map<Key, T, Hash, KeyEqual>`: use when hashing is preferred; provide custom hash/equality if needed.

- Use cases:
    - Use `map` when:
        - You need ordered traversal by key.
        - Deterministic O(log n) guarantees are acceptable.
    - Use `unordered_map` when:
        - You need faster average lookups and insertion and order does not matter.

- Common pitfalls:
    - `operator[]` inserts a default-constructed mapped value when key missing.
    - Iterator validity: erasing an element invalidates iterators to that element only.
    - Be mindful of the cost of expensive key comparisons for complex key types.

---------------------------------------- End Map Key Notes ----------------------------------------

---------------------------------------- Multimap Key Notes ----------------------------------------

- Container Type:
    - `multimap<Key, T>` is an ordered associative container that allows duplicate keys.
    - Typically implemented as a balanced binary tree (e.g., red‑black).

- Complexity:
    - Most operations (insert, find, erase, lower_bound, upper_bound) are O(log n).

- Key Functions / Members:
    - insert(value) / emplace(args...): inserts element (duplicates allowed).
    - equal_range(key): returns pair of iterators covering all elements with key.
    - count(key): returns number of elements with that key (>= 0).
    - find(key): returns iterator to one matching element (not necessarily the first by insertion order).
    - erase(key) / erase(iterator): remove elements (erase(key) removes all with that key).
    - size(), empty(), clear().

- Iteration and access:
    - Iteration is in ascending key order; duplicate-key elements appear adjacent.
    - Use `for (auto it = m.lower_bound(k); it != m.upper_bound(k); ++it)` or `equal_range` to iterate duplicates.

- Use cases:
    - Use `multimap` when you need to associate multiple values with the same key while maintaining order.

- Common pitfalls:
    - No `operator[]` (because keys are not unique).
    - Erasing by key removes all duplicates for that key.

------------------------------------- Unordered_map Key Notes -------------------------------------

- Container Type:
    - `unordered_map<Key, T, Hash, KeyEqual>` is a hash-table based associative container.
    - Keys are unique; use `unordered_multimap` for duplicates.

- Complexity:
    - Average-case O(1) for find/insert/erase; worst-case O(n) (rare, depends on hash distribution).
    - Performance depends on hash function and load factor.

- Key Functions / Members:
    - insert(value) / emplace(args...): inserts element.
    - operator[](key): returns reference to mapped value, inserts default if missing.
    - at(key): throws `out_of_range` if key absent.
    - find(key), count(key) (0 or 1), erase(key), size(), clear().
    - bucket_count(), bucket_size(), load_factor(), max_load_factor(), rehash(n), reserve(n) — control/respect bucketization and rehashing.

- Iteration and ordering:
    - Iteration order is unspecified and may change after rehash/insertions.
    - No range queries like lower_bound/upper_bound since there is no ordering.

- Use cases:
    - Use `unordered_map` for faster average lookups when element ordering is not required.

- Common pitfalls:
    - Iteration order unstable and not sorted.
    - Poor hash functions can degrade performance.
    - `operator[]` creates elements if key missing.
    - Rehashing can invalidate iterators.

---------------------------------------- End Map Key Notes ----------------------------------------

---------------------------------------- Set Key Notes ----------------------------------------

- Container Type:
    - `set<Key>` is an ordered associative container that stores unique keys in sorted order.
    - Typically implemented as a balanced binary search tree (e.g., red‑black tree).

- Complexity:
    - insert/find/erase/lower_bound/upper_bound: O(log n).

- Key Functions / Members:
    - insert(value) / emplace(args...): insert element (no duplicates).
    - erase(key) / erase(iterator) / erase(first, last): remove elements.
    - find(key): returns iterator or `end()`.
    - count(key): returns 0 or 1.
    - size(), empty(), clear().
    - begin(), end(), rbegin(), rend(): iterate in ascending/descending order.
    - lower_bound(key), upper_bound(key), equal_range(key).

- Iteration and access:
    - Elements are accessed via iterators; no operator[] or direct index access.
    - Iteration yields elements in sorted order defined by the comparator.

- Customization:
    - `set<Key, Compare>`: provide custom comparator for ordering.
    - Use `multiset` when duplicates are required.
    - Use `unordered_set` when average O(1) lookups are preferred and order doesn't matter.

- Iterator invalidation:
    - Erasing an element invalidates only iterators to the erased element; other iterators remain valid.
    - Rebalancing internally does not invalidate iterators (tree guarantees).

- Use cases:
    - Maintain a collection of unique items with fast ordered lookup and ordered iteration.
    - Good when you need automatic ordering and logarithmic modifications.

- Common pitfalls:
    - Inserting heavy objects may be costly; prefer storing pointers or small keys if appropriate.
    - For many small inserts followed by many iterations, a sorted vector may be faster in practice.
    - Remember `count` returns 0/1 for `set` (use `multiset` for counts >1).

---------------------------------------- End Set Key Notes ----------------------------------------

---------------------------------------- STL Algorithms Key Notes ----------------------------------------

- Header files:
    - Most in <algorithm>. Numeric algorithms in <numeric>. Randomized helpers in <random>.

- General:
    - Algorithms work on iterator ranges [first, last).
    - Complexity usually expressed in terms of distance(first, last).
    - Many algorithms are non-modifying (observe-only) or modifying (reorder/overwrite elements).
    - Algorithm calls do not change container size (except ones that erase via container member functions).

- Sorting & ordering:
    - sort(first, last) — sorts range (introsort), O(n log n) average.
    - stable_sort(first, last) — stable O(n log n) extra memory.
    - partial_sort(first, middle, last) — sorts first part; O(n log k).
    - nth_element(first, nth, last) — places nth element as if sorted, O(n) average.
    - is_sorted(first, last) / is_sorted_until(...).

- Binary search & bounds (require sorted range):
    - binary_search(first, last, value) — returns bool, O(log n).
    - lower_bound(first, last, value) — first >= value.
    - upper_bound(first, last, value) — first > value.
    - equal_range(first, last, value) — pair(lower_bound, upper_bound).

- Search & find:
    - find(first, last, value) — linear search, O(n).
    - find_if / find_if_not — search by predicate.
    - adjacent_find — finds adjacent equal elements.

- Counting & checking:
    - count / count_if.
    - all_of / any_of / none_of — boolean checks.

- Transformations:
    - transform(in_first, in_last, out_first, op) — elementwise transform.
    - for_each — apply function to each element (returns function object).

- Copying & moving:
    - copy / copy_if / copy_n.
    - move / move_backward.
    - swap_ranges.

- Removing & unique:
    - remove / remove_if — move-to-end erase pattern (does not change container size).
    - erase-remove idiom: cont.erase(remove(...), cont.end()) to actually remove from container.
    - unique — removes consecutive duplicates (use with sort to deduplicate).

- Partitioning & reordering:
    - partition / stable_partition — reorder based on predicate.
    - rotate / rotate_copy — rotate range.
    - reverse / reverse_copy.
    - shuffle — random shuffle (needs random engine).
    - iota(first, last, start) — fill with sequential values.
    - generate / generate_n — fill with values from generator.

- Heaps:
    - make_heap / push_heap / pop_heap / sort_heap.
    - is_heap / is_heap_until.

- Merges & set algorithms (ranges must be sorted):
    - merge — merge two sorted ranges into a sorted output.
    - inplace_merge — merge two consecutive sorted ranges in-place.
    - set_union, set_intersection, set_difference, set_symmetric_difference.

- Min/Max:
    - min_element / max_element / minmax_element.
    - max / min / clamp / max_element with custom comparator.

- Numeric:
    - accumulate — reduce (sum) elements, <numeric>.
    - inner_product, partial_sum, adjacent_difference.

- Sampling & random:
    - sample — randomly select k elements from range (C++17).
    - shuffle — random shuffle (C++11+).

- Complexity notes & pitfalls:
    - Prefer algorithms over manual loops for clarity and correctness.
    - Many algorithms assume iterator category: e.g., random-access needed for nth_element, sort.
    - erase-remove idiom commonly needed for standard containers (vector, deque, string).
    - Be careful with algorithms that reorder elements when preserving order matters (use stable_* variants).
    - Using algorithms with associative containers uses their iterators — some algorithms (like sort) require mutable random-access iterators and cannot be used on maps/sets.

- Useful patterns:
    - Deduplicate vector: sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());
    - Top-K elements: partial_sort or nth_element + partitioning.
    - Transform + copy_if for filtered mapped output.

---------------------------------------- End STL Algorithms Key Notes ----------------------------------------
