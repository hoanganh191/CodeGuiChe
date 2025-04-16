#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int evaluatePostfix(string expression) {
    stack<int> st;
    stringstream ss(expression);
    string token;

    while (ss >> token) {
        // Nếu token là số (bao gồm cả số âm)
        if (isdigit(token[0]) || (token[0] == '-' && token.length() > 1)) {
            st.push(stoi(token));
        } else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int result;

            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else if (token == "/") result = a / b; // chia nguyên

            st.push(result);
        }
    }

    return st.top();
}
