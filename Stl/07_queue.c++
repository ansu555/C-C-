//First in first out

#include<iostream>
#include<queue>  // Include for queue
using namespace std;

int main() {
    queue<int> q;

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Display the front element
    cout << "Front element: " << q.front() << endl; // Output: 10

    // Display the back element
    cout << "Back element: " << q.back() << endl; // Output: 30

    // Size of the queue
    cout << "Queue size: " << q.size() << endl; // Output: 3

    // Removing elements from the queue (FIFO)
    q.pop(); // Removes 10 (front)
    cout << "After pop, front element: " << q.front() << endl; // Output: 20

    // Check if the queue is empty
    cout << "Is the queue empty? " << q.empty() << endl; // Output: 0 (false)

    // Swap with another queue
    queue<int> q2;
    q2.push(100);
    q2.push(200);

    q.swap(q2);
    cout << "After swap, front of q: " << q.front() << endl; // Output: 100
    cout << "After swap, front of q2: " << q2.front() << endl; // Output: 20

    return 0;
}
