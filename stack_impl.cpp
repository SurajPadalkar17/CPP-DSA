#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    ~Stack() {
        delete[] arr; // Free dynamically allocated memory
    }

    void push(int element) {
        if (size - top > 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    int pop() {
        if (top >= 0) {
            int poppedElement = arr[top];
            top--;
            return poppedElement;
        } else {
            cout << "Stack Underflow" << endl;
            return -1; // Indicating failure
        }
    }

    int peek() {
        if (top >= 0)
            return arr[top];
        else {
            cout << "Stack is empty" << endl;
            return -1; // Indicating failure
        }
    }

    bool is_empty() {
        return (top == -1);
    }
};

int main() {
    Stack st(5);
    st.push(22);
    st.push(42);
    st.push(54);
    st.push(43);

    cout << "Top element is " << st.peek() << endl;
    cout << "Popped element is " << st.pop() << endl;
    cout << "Popped element is " << st.pop() << endl;

    cout << "Stack is empty: " << (st.is_empty() ? "Yes" : "No") << endl;
    cout << "Top element is " << st.peek() << endl;
    return 0;
}
