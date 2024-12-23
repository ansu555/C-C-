// //find sum oif two matrix

// #include<stdio.h>
// int main()
// {
// int m,n;
// printf("Enter the number of rows(m) and columns(n):");
// scanf("%d%d",&m,&n);
// int a[m][n],b[m][n],c[m][n];
// printf("\nEnter elements of first matrix: \n");
// //matrix 1
// for(int i=0;i<m;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d ",&a[i][j]);
//     }
    
// }
// //matrix 2
// for(int i=0;i<m;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&b[i][j]);
//     }
// }
// //addition
// for(int i=0;i<m;i++)
// {
//   for(int j=0;j<n;j++)
//   {
//      c[i][j]=a[i][j]+b[i][j];
//   }
// }
// //result
// printf("\nSum of matrices:\n");
// for(int i=0;i<m;i++)
// {
//    for(int j=0;j<n;j++)
//    {
//     printf("%d ",c[i][j]);
//    }
//    printf("\n");
// }
// return 0;
// }


#include <iostream>
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

void push(int value) {
    if (isFull()) {
        cout << "Stack Overflow! Cannot push more elements.\n";
        return;
    }
    arr[++top] = value;
    cout << "Pushed " << value << " into the stack.\n";
}

void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! Cannot pop from an empty stack.\n";
        return;
    }
    cout << "Popped " << arr[top--] << " from the stack.\n";
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Elements of the stack are:\n";
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}

int main() {
    int choice, value;

    while (true) {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
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

