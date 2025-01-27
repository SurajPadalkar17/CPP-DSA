#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include<math.h>
using namespace std;

// Mapping words to digits
unordered_map<string, int> digitMap = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
    {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
};

// Mapping operations to function names
unordered_map<string, char> opMap = {
    {"add", '+'}, {"sub", '-'}, {"mul", '*'}, {"rem", '%'}, {"pow", '^'}, {"div", '/'}
};

// Function to convert word digits like "onectwoczero" to numbers like 120
bool wordToNumber(const string &word, int &result) {
    stringstream ss;
    string digit;
    result = 0;
    int currentNumber = 0;
    
    for (size_t i = 0; i < word.size(); ++i) {
        if (word[i] == 'c') {
            if (digitMap.find(digit) != digitMap.end()) {
                currentNumber = currentNumber * 10 + digitMap[digit];
            } else {
                return false; // Invalid word detected
            }
            digit.clear();
        } else {
            digit += word[i];
        }
    }
    if (!digit.empty() && digitMap.find(digit) != digitMap.end()) {
        currentNumber = currentNumber * 10 + digitMap[digit];
    }
    
    result = currentNumber;
    return true;
}

// Function to evaluate a simple expression with two operands
int evaluateSimple(char op, int operand1, int operand2) {
    switch (op) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
        case '%': return operand1 % operand2;
        // case '^': return power(operand1, operand2);
        default: return 0;
    }
}

// Function to evaluate the expression
string evaluateExpression(vector<string> &tokens) {
    vector<int> numbers;
    vector<char> operations;
    
    for (size_t i = 0; i < tokens.size(); ++i) {
        string token = tokens[i];
        // Check if it's an operation
        if (opMap.find(token) != opMap.end()) {
            operations.push_back(opMap[token]);
        } else {
            // Check if it's a number in words
            int number;
            if (wordToNumber(token, number)) {
                numbers.push_back(number);
            } else {
                return "expression evaluation stopped invalid words present";
            }
        }
    }

    if (operations.size() == 0 || numbers.size() < 2) {
        return "expression is not complete or invalid";
    }

    // Now evaluate the expression
    while (operations.size() > 0 && numbers.size() >= 2) {
        char operation = operations.back();
        operations.pop_back();

        int operand2 = numbers.back();
        numbers.pop_back();
        int operand1 = numbers.back();
        numbers.pop_back();

        int result = evaluateSimple(operation, operand1, operand2);
        numbers.push_back(result);
    }

    if (numbers.size() == 1) {
        return to_string(numbers.back());
    }

    return "expression is not complete or invalid";
}

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    string word;
    vector<string> tokens;

    while (ss >> word) {
        tokens.push_back(word);
    }

    string result = evaluateExpression(tokens);
    cout << result << endl;

    return 0;
}
                        