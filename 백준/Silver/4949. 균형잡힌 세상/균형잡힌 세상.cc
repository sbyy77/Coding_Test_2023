#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
#define err 1e-13
/* 20201650 */
using namespace std;
typedef long long ll;
typedef double db;


int main() {
	ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    while (1) {
        string str;
        getline(cin, str);

        if (str == ".") {
            break;
        } // 종료 조건
        stack<char> st;
        bool flag = 0;
        int len = str.length();
        for (int i = 0; i < len; i++) {
            char c = str[i];
            if ((c == '(' || c == '[')) {
                st.push(c);
            }   // 시작 괄호
            else if (c == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                }
                else {
                    flag = 1;
                    break;
                }
            }
            else if (c == ']') {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                }
                else {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0 && st.empty()) {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
    return 0;
}


