#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    void solve(stack<int> &s, int x)
    {
        // Base case: If the stack is empty, push x and return
        if (s.empty())
        {
            s.push(x);
            return;
        }

        int num = s.top();
        s.pop();

        // Recursive call
        solve(s, x);

        // Push the popped element back onto the stack
        s.push(num);
    }

    stack<int> pushAtBottom(stack<int> &myStack, int x)
    {
        solve(myStack, x);
        return myStack;
    }
};

int main()
{
    Solution s;
    stack<int> myStack;

    // Adding some elements to the stack
    myStack.push(3);
    myStack.push(2);
    myStack.push(1);

    // Push a new element at the bottom
    int x = 5; // Element to push at the bottom
    s.pushAtBottom(myStack, x);

    // Print the stack elements
    cout << "Stack elements after pushing " << x << " at the bottom:" << endl;
    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
