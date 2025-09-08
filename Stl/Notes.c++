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
   
pair & vector of pairs
 - pair<T1,T2> stores two values as .first and .second.

// -------------------------- Revision Cheat-sheet (Quick Points) --------------------------

// Vector basics
// - `vec.end()` points to one-past-the-last element (NOT the last element). Do not dereference.
// - Reverse iterators: `vec.rbegin()` -> last element, `vec.rend()` -> one-before-first element.
// - `vector<int> vec(5);` creates 5 elements initialized to 0.
// - `vector<int> vec(5, 8);` creates 5 elements each equal to 8.
// - `vec.insert(vec.begin() + 2, 4);` inserts 4 before position index 2.
// - `vec.erase(vec.begin() + i);` removes element at index i.
// - Reallocation invalidates all iterators; `reserve()` prevents reallocations up to capacity.

// Iterator rules (short)
// - `begin()`..`end()` iterate forward. `rbegin()`..`rend()` iterate reverse.
// - Never dereference `end()` or `rend()` (undefined behaviour).
// - Use `for (auto &x : vec)` for simple iteration; use `const auto&` if you don't modify elements.

// Set & find
// - Use `it = s.find(x); if (it != s.end())` to check membership; `count(x)` returns 0 or 1 for set.
// - `lower_bound(x)` returns iterator to first element >= x. If x is greater than all elements, it returns `end()`.
// - `upper_bound(x)` returns first element > x.

// Unordered containers
// - `unordered_set` / `unordered_map` use hashing and provide average O(1) lookup/insert/erase.
// - Use unordered containers for speed when ordering is not required. Poor hash functions can degrade performance.

// Map
// - `map` stores keys in ascending order by default (use custom comparator to change order).
// - `m[key]` inserts default value if key missing. Use `m.at(key)` to avoid accidental insertion (throws if missing).

// Common idioms
// - Erase-remove idiom (remove elements from vector):
//     v.erase(std::remove_if(v.begin(), v.end(), pred), v.end());
// - Deduplicate vector while preserving one copy per value:
//     sort(v.begin(), v.end());
//     v.erase(std::unique(v.begin(), v.end()), v.end());
// - Frequency map: `unordered_map<T,int> freq; for (auto &x : v) ++freq[x];`

// -------------------------- Flashcards (Quick memory prompts) --------------------------

// Flashcard 1
// Q: What does `vec.end()` point to?
// A: One-past-the-last element (cannot be dereferenced).

// Flashcard 2
// Q: How to create a vector of five zeros? How to create five 8s?
// A: `vector<int> v(5);` and `vector<int> v(5, 8);` respectively.

// Flashcard 3
// Q: How do you insert value 4 before index 2 in a vector?
// A: `v.insert(v.begin() + 2, 4);` (inserts before position 2).

// Flashcard 4
// Q: How to check if element x exists in a `set<int> s`?
// A: `if (s.find(x) != s.end()) { /* found */ }` or use `s.count(x)`.

// Flashcard 5
// Q: What is the difference between `map` and `unordered_map`?
// A: `map` is ordered and uses balanced tree (O(log n)); `unordered_map` uses hash table (average O(1)).

// Flashcard 6
// Q: What does `lower_bound` return on a sorted container?
// A: Iterator to the first element >= given value; returns `end()` if value greater than all elements.

// Flashcard 7
// Q: When does vector reallocation occur and what is the consequence?
// A: When size exceeds capacity; reallocation invalidates all iterators and references to elements.

// Flashcard 8
// Q: How to safely remove elements from a vector based on a predicate?
// A: Use erase-remove idiom: `v.erase(remove_if(...), v.end());`.

// Flashcard 9
// Q: How to preserve relative order when sorting partially?
// A: Use `stable_sort` if you need to preserve relative order of equivalent elements.

// Flashcard 10
// Q: Does `operator[]` on `map` insert a key if missing?
// A: Yes — it default-constructs and inserts the mapped type. Use `at()` to avoid insertion.

// -------------------------- Short example snippets --------------------------
// create vector of five 8s:
//   vector<int> v(5, 8);
// insert 4 before index 2:
//   v.insert(v.begin() + 2, 4);
// check set membership:
//   if (s.find(x) != s.end()) cout << "present";
// using unordered_map for frequency:
//   unordered_map<int,int> f; for (int x : v) ++f[x];

// -------------------------------- End quick revision --------------------------------

// -------------------------- User Quick Highlights (must-remember) --------------------------

// Vectors
// - `vec.end()` points to one-past-the-last element (i.e. after the last element). It is NOT the last element.
// - For reverse iteration use `vec.rbegin()` (last element) and `vec.rend()` (one-before-first element).
//   Do NOT confuse `vec.end()` with reverse iteration boundaries.
// - `vector<int> vec(5);` creates a vector with 5 elements all initialized to 0.
// - `vector<int> vec(5, 8);` creates a vector with 5 elements all initialized to 8.
// - `vec.insert(vec.begin() + 2, 4);` inserts the value 4 before position index 2 (shifts current element at index 2 to the right).

// Sets
// - To check membership: `if (s.find(x) != s.end()) { /* x exists */ }`.
// - `find()` returns an iterator to the element if found; otherwise it returns `s.end()`.

// lower_bound / upper_bound (on sorted ranges / associative containers)
// - `lower_bound(x)` returns iterator to the first element >= x.
// - If x is larger than any element in the container, `lower_bound(x)` returns `end()`.
// - `upper_bound(x)` returns iterator to the first element > x.

// Unordered containers
// - We use `unordered_set` / `unordered_map` when we want better average-time complexity (average O(1) lookups) and ordering is not required.
// - Remember: unordered containers have no ordering guarantees and iteration order can change after rehashes.

// Maps
// - `map` stores keys in ascending order by default (use a custom comparator to change this ordering).

// Short examples
//  vector<int> v(5);        // -> {0,0,0,0,0}
//  vector<int> v2(5,8);     // -> {8,8,8,8,8}
//  v.insert(v.begin()+2,4); // insert 4 before index 2
//  if (s.find(x) != s.end()) // check membership in set

// -------------------------- End User Quick Highlights --------------------------
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

STL QUICK NOTES (based on test.c++ examples)

General
- Include headers specifically (<vector>, <list>, <set>, <unordered_set>, <stack>, <queue>, <priority_queue>, <map>, <algorithm>, <numeric>...) rather than bits/stdc++.h in portable code.
- Algorithms operate on iterator ranges [first, last).
- Never dereference end() (undefined behaviour): do not use *v.end().

Vector
- Dynamic array: contiguous storage, random access O(1).
- push_back amortized O(1). insert/erase in middle O(n).
- Use v.front(), v.back() for first/last element.
- begin(), end() give forward iterators; rbegin(), rend() give reverse iterators.
- Do not dereference end() and beware of invalidation: reallocation invalidates all iterators.
- Common idiom: iterate with for(auto &x : v) or for(auto it = v.begin(); it != v.end(); ++it).
- To erase by index: v.erase(v.begin() + idx). To insert at index: v.insert(v.begin() + idx, value).

Pair & vector of pairs
- pair<T1,T2> stores two values as .first and .second.
- Useful in vectors for key-value-like data or sorting by pair.

List
- Doubly linked list: O(1) insert/erase given iterator, no random access.
- Use when many insert/erase in middle and you have iterators.

Stack / Queue / Priority Queue
- Adapters: stack<T> (LIFO), queue<T> (FIFO), priority_queue<T> (heap-based).
- priority_queue<T> default is max-heap. For min-heap use:
  priority_queue<T, vector<T>, greater<T>> minHeap;
- Use .top(), .push(), .pop(), .empty().

Set / Multiset
- set<T>: ordered unique keys (balanced tree), O(log n) insert/find/erase.
- multiset<T>: allows duplicates; count(key) > 1 possible.
- Iteration in sorted order. lower_bound / upper_bound available.
- Erasing by key on multiset may remove all equivalent elements (use iterator erase to remove one).

Unordered_set
- Hash-based, average O(1) find/insert/erase. No ordering of elements.
- Iteration order unspecified and may change on rehash.
- Good for frequency tracking and fast membership tests.

Map / Unordered_map (short)
- map<Key,T>: ordered, unique keys, operations O(log n).
- unordered_map<Key,T>: hash-based, average O(1).
- operator[] inserts default value if key absent; use at() to avoid insertion.
- For multiple values per key use multimap or map<Key, vector<T>>.

Iterators & Common Pitfalls
- Do not compare reverse iterators with < or use arithmetic unless category supports it; use != or ++/--.
- Dereferencing end() or past-the-end iterators is UB.
- After erase on associative containers, only iterators to erased elements are invalidated; others remain valid.
- For vector erase-remove idiom:
    v.erase(std::remove_if(v.begin(), v.end(), pred), v.end());
- To deduplicate a vector:
    sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());

Best Practices & Debugging
- Prefer range-based for and algorithms for clarity.
- Use meaningful headers, avoid bits/stdc++.h in production.
- Use is_sorted, min_element/max_element, and size/logging to debug container state.
- Check comparator/hash correctness if ordered/unordered containers behave unexpectedly.

Notes about the provided test.c++ code (issues to fix)
- cout << *endItr << endl; // UB: endItr == v.end(), cannot dereference.
- Iterating reverse iterator with `for(auto itr = v.rbegin(); itr < v.rend(); itr++)` is fragile; use
    for (auto itr = v.rbegin(); itr != v.rend(); ++itr)
- When printing find() failure, don't dereference the returned end() iterator.
- Use const & in range-for when not modifying elements: for (const auto &x : v)

----------------------------------------
End of Notes
