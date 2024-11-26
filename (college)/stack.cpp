#include<iostream>
using namespace std;

#define MAX_SIZE 100

int arr[MAX_SIZE];
int top = -1;

bool isEmpty() {
    return (top == -1);
}

bool isFull() {
    return (top == MAX_SIZE - 1);
}

// function for push

void push(int value) {
    if (isFull()) {
        cout << "Stack Overflow! Cannot push more elements.\n";
        return;
    }
    arr[++top] = value;
    cout << "Pushed " << value << " into the stack.\n";
}

//function for pop

void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! Cannot pop from an empty stack.\n";
        return;
    }
    cout << "Popped " << arr[top--] << " from the stack.\n";
}

//function for display
void display() {
    if (isEmpty()) {
        cout << "Stack is empty. Cannot display.\n";
    } else {
        cout << "Elements of the stack are:\n";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
        cout<<endl;
    }
}

int main()
{
 int choice, value;

    while (true) {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        

//switch case

 switch (choice) {
            case 1:
            cout<<endl;
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    }
return 0;
}