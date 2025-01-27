#include <iostream>
#include <string>

using namespace std;

// Function to check if a substring is palindrome
bool isPalindrome(const string &str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Function to count palindrome substrings in a given string
int countPalindromes(const string &str) {
    int n = str.length();
    int count = 0;

    // Check every possible substring
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(str, i, j)) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int palindromeCount = countPalindromes(input);
    cout << "Number of palindrome substrings: " << palindromeCount << endl;

    return 0;
}
