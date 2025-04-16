#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Hàm kiểm tra độ ưu tiên toán tử
int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    if(op == '^') return 3;
    return 0;
}

// Hàm chuyển trung tố sang hậu tố
string infixToPostfix(string infix) {
    stack<char> opStack; //Stack luu toan tu
    string postfix = "";

    for (size_t i = 0; i < infix.length(); ++i) {
        char ch = infix[i];

        if (isspace(ch)) continue; // bỏ qua khoảng trắng

        // Nếu là chữ số (số nhiều chữ số)
        if (isdigit(ch)) {
            while (i < infix.length() && isdigit(infix[i])) {
                postfix += infix[i];
                ++i;
            }
            postfix += ' '; // thêm dấu cách sau số
            --i; // vì for sẽ ++i tiếp
        }
        // Nếu là biến (chữ cái)
        else if (isalpha(ch)) {
            postfix += ch;
            postfix += ' ';
        }
        else if (ch == '(') {
            opStack.push(ch);
        }
        else if (ch == ')') {
            while (!opStack.empty() && opStack.top() != '(') {
                postfix += opStack.top();
                postfix += ' ';
                opStack.pop();
            }
            if (!opStack.empty()) opStack.pop(); // bỏ dấu '('
        }
        else { // toán tử
            while (!opStack.empty() && precedence(opStack.top()) >= precedence(ch)) {
                postfix += opStack.top();
                postfix += ' ';
                opStack.pop();
            }
            opStack.push(ch);
        }
    }

    // Đẩy hết toán tử còn lại ra hậu tố
    while (!opStack.empty()) {
        postfix += opStack.top();
        postfix += ' ';
        opStack.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Nhap bieu thuc trung to: ";
    getline(cin, infix); // dùng getline để nhập cả biểu thức có dấu cách

    string postfix = infixToPostfix(infix);
    cout << "Bieu thuc hau to: " << postfix << endl;

    return 0;
}
