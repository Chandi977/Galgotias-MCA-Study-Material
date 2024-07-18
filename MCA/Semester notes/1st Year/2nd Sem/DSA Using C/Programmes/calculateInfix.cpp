#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

string infixToPostfix(string infix) {
    string postfix;
    stack<char> s;

    unordered_map<char, int> precedence = {
        {'+', 1}, {'-', 1},
        {'*', 2}, {'/', 2}
    };

    for (char& c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Discard '('
        } else {
            while (!s.empty() && precedence[s.top()] >= precedence[c]) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int evaluatePostfix(string postfix) {
    stack<int> s;

    for (char& c : postfix) {
        if (isdigit(c)) {
            s.push(c - '0');
        } else {
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();
            switch (c) {
                case '+':
                    s.push(operand1 + operand2);
                    break;
                case '-':
                    s.push(operand1 - operand2);
                    break;
                case '*':
                    s.push(operand1 * operand2);
                    break;
                case '/':
                    s.push(operand1 / operand2);
                    break;
            }
        }
    }

    return s.top();
}

int main() {
    string infix = "2*3+(5-3)/2";
    cout << "Infix expression: " << infix << endl;
    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;
    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;
    return 0;
}
