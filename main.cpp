#include <iostream>
using namespace std;

#define MAX 100 // Maximum size of the stack

class Stack {
private:
    int arr[MAX]; // Array to store stack elements
    int top; // Index of the top element

public:
    Stack() : top(-1) {}

    // Push operation
    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    // Peek operation
    int peek() {
        if (top >= 0)
            return arr[top];
        else
            cout << "Stack is empty" << endl;
        return -1;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top < 0;
    }

    // Display stack elements
    void display() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Main function to demonstrate stack operations
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.display();

    s.pop();
    cout << "After pop, stack elements: ";
    s.display();

    cout << "Top element is: " << s.peek() << endl;

    return 0;
}
