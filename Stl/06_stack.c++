//last in first out

#include<iostream>
#include<stack>
using namespace std;

int main() {
    // Creating a stack of integers
    stack<int> s;

    // 1. push() - Adds an element to the top of the stack
    s.push(10);  // Adds 10
    s.push(20);  // Adds 20
    s.push(30);  // Adds 30

    cout << "Top element after pushes: " << s.top() << endl;  // Output: 30

    // 2. emplace() - Adds an element to the top by constructing it in place
    s.emplace(40);  // Adds 40 using emplace, equivalent to push
    cout << "Top element after emplace: " << s.top() << endl;  // Output: 40

    // 3. pop() - Removes the top element of the stack
    s.pop();  // Removes 40
    cout << "Top element after pop: " << s.top() << endl;  // Output: 30

    // 4. size() - Returns the number of elements in the stack
    cout << "Size of stack: " << s.size() << endl;  // Output: 3

    // 5. empty() - Returns true if the stack is empty, false otherwise
    cout << "Is the stack empty? " << (s.empty() ? "Yes" : "No") << endl;  // Output: No

    // 6. swap() - Swaps the contents of two stacks
    stack<int> s2;
    s2.push(50);
    s2.push(60);

    // Swap contents of s and s2
    s.swap(s2);

    cout << "Size of stack s after swap: " << s.size() << endl;  // Output: 2 (s2's size)
    cout << "Top of stack s after swap: " << s.top() << endl;  // Output: 60 (s2's top)
    cout << "Size of stack s2 after swap: " << s2.size() << endl;  // Output: 3 (s's size)
    cout << "Top of stack s2 after swap: " << s2.top() << endl;  // Output: 30 (s's top)

    // 7. front() - **Note**: Stacks do not have front() method. There is no access to elements other than the top.
    // You can only access the top element using `top()`.

    return 0;
}
