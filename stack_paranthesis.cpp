#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                // Check if stack is not empty before accessing its top
                if (!st.empty()) {
                    char top = st.top();
                    if ((ch == ')' && top == '(') || 
                        (ch == '}' && top == '{') || 
                        (ch == ']' && top == '[')) {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false; // Unmatched closing bracket
                }
            }
        }

        // If stack is empty, all brackets are balanced
        return st.empty();
    }
};

int main() {
    string s = "[{()}]"; // Example string to test
    Solution t;
    bool result = t.isValid(s); // Call the isValid function

    // Output the result
    if (result) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }

    return 0;
}
