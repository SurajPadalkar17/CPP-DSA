#include <iostream>
#include <stack>
using namespace std;

void showStack(stack<int> s) {
    // Print elements of the stack
    cout << "Stack elements (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> myStack;

    // Push elements into the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Show elements of the stack
    showStack(myStack);

    // Original stack remains unchanged
    cout << "Stack size after display: " << myStack.size() << endl;

    return 0;
}
