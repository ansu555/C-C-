# STL Notes — Quick Reference

A clean, structured, and complete reference converted from `Notes.c++`. This file contains concise explanations, examples, and flashcards to help you revise the C++ Standard Template Library (STL) quickly.

## Table of contents
- Sequential data
  - Vector
  - Iterator notes for Vector
  - List
  - Pair
  - List vs Vector
  - Deque
  - Key differences between List and Deque
- Associative containers
  - Map
  - Multimap
  - Unordered_map
  - Set
  - Multiset
  - Unordered_set
- Algorithms and utilities
  - STL Algorithms Key Notes
  - Useful patterns
- Quick revision & flashcards
  - User Quick Highlights

---

## Sequential data

### Vector Key Notes

- Container Type:
  - A `vector` is a dynamic array that can grow and shrink during runtime.

- Memory Management:
  - When the vector size increases, it typically doubles its capacity and copies the old elements to the new memory block.

- Size vs. Capacity:
  - `size()` — Returns the number of elements.
  - `capacity()` — Returns the total number of elements that can be stored before needing reallocation.

- Important Functions:
  - `push_back(value)` — Adds an element to the end of the vector.
  - `emplace_back(value)` — Similar to `push_back`, but constructs the element in-place.
  - `pop_back()` — Removes the last element.
  - `size()` — Returns the current number of elements.
  - `capacity()` — Returns the allocated memory size.
  - `clear()` — Removes all elements from the vector.
  - `front()` — Returns the first element.
  - `back()` — Returns the last element.
  - `erase()` — Removes an element by position or a range of elements.
  - `insert()` — Inserts an element at a specific position.
  - `resize()` — Changes the size of the vector, adding default values if larger.
  - `reserve()` — Pre-allocates memory for a specified number of elements.
  - `at()` — Accesses an element with bounds checking.

### Iterator Notes for Vector

- Iterators (`begin()`, `end()`, `rbegin()`, `rend()`):
  - `begin()` — Returns an iterator to the first element of the vector.
  - `end()` — Returns an iterator to one past the last element (don't dereference it!).
  - `rbegin()` — Returns a reverse iterator to the last element of the vector.
  - `rend()` — Returns a reverse iterator to one before the first element.

- Forward Iteration:
  - Use `begin()` and `end()` to iterate from the first to the last element.

- Reverse Iteration:
  - Use `rbegin()` and `rend()` to iterate from the last element to the first.

- Dereferencing:
  - Use `*it` to access the value an iterator points to.

- Warning with `end()`:
  - Dereferencing `end()` is undefined behavior as it points to one past the last element.

### List Key Notes

- Container Type:
  - A `list` is a doubly linked list, unlike a `vector` which is a dynamic array.

- Efficient Insertion and Deletion:
  - Inserting or deleting elements is faster than vectors when it’s not at the end because the list allows constant-time insertions or deletions anywhere.

- Key Functions:
  - `push_back(value)`, `push_front(value)`, `pop_back()`, `pop_front()`, `insert()`, `erase()`, `size()`, `clear()`, `front()`, `back()`.

### Pair Notes

1. Definition:
   - A `pair` is a template class from the STL (Standard Template Library) defined in the `<utility>` header.
   - It stores two values together, which may or may not be of the same type.
   - Members of a pair: `first` and `second`.

2. Key Use Cases:
   - To group two related values logically together. Useful when you want to store a pair of data that belongs together.
   - Commonly used in containers like `map` and `set`, where you store key-value pairs.

3. Nested Pairs:
   - A `pair` can store another `pair` as its second value, which allows for more complex relationships or data structures.
   - Example: `pair<int, pair<int, int>>`.

4. Arrays of Pairs:
   - Example:

```cpp
pair<int, int> arr[] = { make_pair(1, 2), make_pair(4, 6), make_pair(9, 0) };
```

5. Accessing Elements:
   - Use `.first` and `.second` to access elements.

6. Example Code:

```cpp
pair<int, int> p = make_pair(1, 3);
cout << p.first << " " << p.second;
```

### List vs Vector

- Vector:
    - Elements are stored in a contiguous memory block.
    - Faster access by index (constant time).
    - Slower insertions/deletions in the middle or front (due to shifting elements).
    - `push_back()` may involve reallocating memory when the vector grows.

- List:
    - Elements are stored in non-contiguous memory locations (linked list).
    - No direct access by index (linear time for accessing an element).
    - Faster insertions and deletions anywhere in the list (constant time).
    - Memory usage is higher due to the need for storing pointers for each element.

### Deque (Double-Ended Queue)

- Container Type:
    - A `deque` is similar to a vector but allows efficient insertions and deletions at both ends.

- Functions:
    - `push_back()`, `push_front()`, `pop_back()`, `pop_front()` and random access.

### Key Differences between List and Deque

- Memory Layout:
    - List: Doubly linked list; non-contiguous memory.
    - Deque: Similar to vector but stores data in multiple blocks, allowing constant-time insertions at both ends.

- Performance:
    - List: Better for frequent insertions and deletions at arbitrary positions.
    - Deque: Better for frequent insertions and deletions at both ends with random access.

## Map Key Notes

- Container Type:
    - `map<Key, T>` is an ordered associative container (balanced binary tree, typically red‑black).
    - Keys are unique. Use `multimap` if duplicate keys are required.
    - Stores elements as `pair<const Key, T>`.

- Complexity:
    - Most operations (`find`, `insert`, `erase`, `lower_bound`, `upper_bound`) are O(log n).
    - `unordered_map` is hash-based (average O(1)).

- Key Functions / Members:
    - `insert(value)` / `insert({k, v})` — inserts element; returns `pair<iterator,bool>`.
    - `emplace(args...)` — constructs element in-place.
    - `emplace_hint(pos, args...)` — uses hint iterator to optimize insertion.
    - `operator[](key)` — returns reference to mapped value; inserts default value if key absent.
    - `at(key)` — throws `out_of_range` if key absent.
    - `find(key)`, `count(key)`, `erase(key)` / `erase(iterator)`.

- Range queries and ordering:
    - `begin()`, `end()`, `rbegin()`, `rend()` — iterate in ascending key order.
    - `lower_bound(key)`, `upper_bound(key)`, `equal_range(key)`.

- Iteration and access:
    - Access key and value with `it->first` and `it->second`.
    - Structured bindings: `for (auto const& [k,v] : m) { ... }`.
    - Keys are `const` in the map element type.

- Insertion return value:
    - `auto [it, inserted] = m.insert({k,v});` — `inserted` is `true` if insertion happened.

- Customization:
    - `map<Key, T, Compare>` — provide a custom comparator to change ordering.

- Use cases:
    - Use `map` when you need ordered traversal by key and deterministic O(log n) guarantees.

- Common pitfalls:
    - `operator[]` inserts a default-constructed mapped value when key missing.
    - Erasing an element invalidates iterators to that element only.

## Multimap Key Notes

- Container Type:
    - `multimap<Key, T>` is an ordered associative container that allows duplicate keys.

- Complexity:
    - Most operations are O(log n).

- Key Functions / Members:
    - `insert`, `emplace`, `equal_range(key)`, `count(key)`, `find(key)`, `erase(key)` / `erase(iterator)`.

- Iteration and access:
    - Iteration is in ascending key order; duplicates appear adjacent.

- Use cases:
    - Use `multimap` when you need multiple values per key and ordering.

## Unordered_map Key Notes

- Container Type:
    - `unordered_map<Key, T, Hash, KeyEqual>` is a hash-table based associative container.

- Complexity:
    - Average-case O(1) for `find`/`insert`/`erase`; worst-case O(n).

- Key Functions / Members:
    - `insert`, `emplace`, `operator[]`, `at`, `find`, `count`, `erase`, `size`, `clear`.
    - Bucket-related: `bucket_count()`, `bucket_size()`, `load_factor()`, `max_load_factor()`, `rehash(n)`, `reserve(n)`.

- Iteration and ordering:
    - Iteration order is unspecified and may change after rehash/insertions.

- Use cases:
    - Use `unordered_map` when you need faster average lookups and element ordering doesn't matter.

- Common pitfalls:
    - `operator[]` creates an element if key missing.
    - Rehashing can invalidate iterators.

## Set Key Notes

- Container Type:
    - `set<Key>` stores unique keys in sorted order (balanced tree implementation).

- Complexity:
    - `insert`, `find`, `erase`, `lower_bound`, `upper_bound` — O(log n).

- Key Functions / Members:
    - `insert`, `emplace`, `erase`, `find`, `count`, `size`, `empty`, `clear`, `lower_bound`, `upper_bound`, `equal_range`.

- Iteration and access:
    - No `operator[]`; iterate with iterators in sorted order.

- Iterator invalidation:
    - Erasing an element invalidates only iterators to the erased element.

- Use cases & pitfalls:
    - Use `multiset` when duplicates are required.
    - Inserting heavy objects can be costly; consider pointers or small keys.

## STL Algorithms Key Notes

- Header files:
    - Most algorithms are in `<algorithm>`. Numeric helpers in `<numeric>`. Random helpers in `<random>`.

- General:
    - Algorithms operate on iterator ranges `[first, last)`.
    - Complexity usually in terms of `distance(first, last)`.
    - Some algorithms are non-modifying; some reorder elements.

- Sorting & ordering:
    - `sort(first, last)` — Introsort, average O(n log n).
    - `stable_sort(first, last)` — stable O(n log n) but may use extra memory.
    - `partial_sort`, `nth_element`, `is_sorted`, `is_sorted_until`.

- Binary search & bounds (require sorted range):
    - `binary_search`, `lower_bound`, `upper_bound`, `equal_range`.

- Search & find:
    - `find`, `find_if`, `find_if_not`, `adjacent_find`.

- Counting & checking:
    - `count`, `count_if`, `all_of`, `any_of`, `none_of`.

- Transformations:
    - `transform`, `for_each`.

- Copying & moving:
    - `copy`, `copy_if`, `copy_n`, `move`, `move_backward`, `swap_ranges`.

- Removing & unique:
    - `remove`, `remove_if` (erase-remove idiom), `unique` (use with `sort` to deduplicate).

- Partitioning & reordering:
    - `partition`, `stable_partition`, `rotate`, `reverse`, `shuffle`, `iota`, `generate`.

- Heaps:
    - `make_heap`, `push_heap`, `pop_heap`, `sort_heap`, `is_heap`, `is_heap_until`.

- Merges & set algorithms (sorted ranges):
    - `merge`, `inplace_merge`, `set_union`, `set_intersection`, `set_difference`, `set_symmetric_difference`.

- Min/Max:
    - `min_element`, `max_element`, `minmax_element`, `max`, `min`, `clamp`.

- Numeric:
    - `accumulate`, `inner_product`, `partial_sum`, `adjacent_difference`.

- Sampling & random:
    - `sample`, `shuffle`.

- Complexity notes & pitfalls:
    - Prefer algorithms over manual loops when possible.
    - Many algorithms require specific iterator categories (random-access for `sort`, `nth_element`).
    - Use `stable_*` when order preservation matters.

## Useful patterns

- Deduplicate vector:

```cpp
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());
```

- Top-K elements: use `partial_sort` or `nth_element` + partitioning.
- Transform + `copy_if` for filtered mapped output.

## STL QUICK NOTES (based on test.c++ examples)

### General

- Include headers specifically (e.g. `<vector>`, `<list>`, `<set>`, `<unordered_set>`, `<stack>`, `<queue>`, `<priority_queue>`, `<map>`, `<algorithm>`, `<numeric>`) rather than `bits/stdc++.h` in portable code.
- Algorithms operate on iterator ranges `[first, last)`.
- Never dereference `end()` (undefined behaviour): do not use `*v.end()`.

### Vector

- Dynamic array: contiguous storage, random access O(1).
- `push_back` amortized O(1). `insert`/`erase` in middle O(n).
- Use `v.front()`, `v.back()` for first/last element.
- `begin()`, `end()` give forward iterators; `rbegin()`, `rend()` give reverse iterators.
- Do not dereference `end()` and beware of invalidation: reallocation invalidates all iterators.
- `for (auto &x : v)` or iterators for loops.
- To erase by index: `v.erase(v.begin() + idx)`. To insert at index: `v.insert(v.begin() + idx, value)`.

### Pair & vector of pairs

- `pair<T1,T2>` stores two values as `.first` and `.second`.

## Flashcards & Quick revision (compact)

### Flashcard 1
**Q:** What does `vec.end()` point to?

**A:** One-past-the-last element (cannot be dereferenced).

### Flashcard 2
**Q:** How to create a vector of five zeros? How to create five 8s?

**A:** `vector<int> v(5);` and `vector<int> v(5, 8);` respectively.

### Flashcard 3
**Q:** How do you insert value 4 before index 2 in a vector?

**A:** `v.insert(v.begin() + 2, 4);` (inserts before position 2).

### Flashcard 4
**Q:** How to check if element `x` exists in a `set<int> s`?

**A:** `if (s.find(x) != s.end()) { /* found */ }` or `s.count(x)`.

### Flashcard 5
**Q:** What is the difference between `map` and `unordered_map`?

**A:** `map` is ordered and uses a balanced tree (O(log n)); `unordered_map` uses a hash table (average O(1)).

### Flashcard 6
**Q:** What does `lower_bound` return on a sorted container?

**A:** Iterator to the first element >= given value; returns `end()` if value greater than all elements.

### Flashcard 7
**Q:** When does vector reallocation occur and what is the consequence?

**A:** When size exceeds capacity; reallocation invalidates all iterators and references to elements.

### Flashcard 8
**Q:** How to safely remove elements from a vector based on a predicate?

**A:** Use erase-remove idiom: `v.erase(remove_if(...), v.end());`.

### Flashcard 9
**Q:** How to preserve relative order when sorting partially?

**A:** Use `stable_sort` if you need to preserve relative order of equivalent elements.

### Flashcard 10
**Q:** Does `operator[]` on `map` insert a key if missing?

**A:** Yes — it default-constructs and inserts the mapped type. Use `at()` to avoid insertion.

## Short example snippets

```cpp
// create vector of five 8s:
vector<int> v(5, 8);

// insert 4 before index 2:
v.insert(v.begin() + 2, 4);

// check set membership:
if (s.find(x) != s.end()) cout << "present";

// using unordered_map for frequency:
unordered_map<int,int> f; for (int x : v) ++f[x];
```

---

## User Quick Highlights (must-remember)

### Vectors

- `vec.end()` points to one-past-the-last element (i.e. after the last element). It is NOT the last element.
- For reverse iteration use `vec.rbegin()` (last element) and `vec.rend()` (one-before-first element).
  Do NOT confuse `vec.end()` with reverse iteration boundaries.
- `vector<int> vec(5);` creates a vector with 5 elements all initialized to 0.
- `vector<int> vec(5, 8);` creates a vector with 5 elements all initialized to 8.
- `vec.insert(vec.begin() + 2, 4);` inserts the value 4 before position index 2 (shifts current element at index 2 to the right).

### Sets

- To check membership: `if (s.find(x) != s.end()) { /* x exists */ }`.
- `find()` returns an iterator to the element if found; otherwise it returns `s.end()`.

### `lower_bound` / `upper_bound` (on sorted ranges / associative containers)

- `lower_bound(x)` returns iterator to the first element >= x.
- If x is larger than any element in the container, `lower_bound(x)` returns `end()`.
- `upper_bound(x)` returns iterator to the first element > x.

### Unordered containers

- Use `unordered_set` / `unordered_map` when we want better average-time complexity (average O(1) lookups) and ordering is not required.
- Unordered containers have no ordering guarantees and iteration order can change after rehashes.

### Maps

- `map` stores keys in ascending order by default (use a custom comparator to change this ordering).

### Short examples

```cpp
vector<int> v(5);        // -> {0,0,0,0,0}
vector<int> v2(5,8);     // -> {8,8,8,8,8}
v.insert(v.begin()+2,4); // insert 4 before index 2
if (s.find(x) != s.end()) // check membership in set
```

---

## End of file

This README was created from the original `Notes.c++`. If you want a one-page printable cheat-sheet, latex/PDF export, or shorter flashcard-only file, I can produce that next.
