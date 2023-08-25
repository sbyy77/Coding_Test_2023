#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
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
    int n;
    stack<bool> st;
    deque<char> dq;
    cin >> n;
    while (n--) {
        int button;
        char ch;
        cin >> button;
        if (button == 1) {  // 마지막에
            cin >> ch;
            st.push(false);
            dq.push_back(ch);
        }
        else if (button == 2) {     // 맨 앞에
            cin >> ch;
            st.push(true);
            dq.push_front(ch);
        }
        else if (button == 3) {     // 가장나중 추가된 블록 제거
            if (!st.empty()) {
                if (!st.top()) {
                    dq.pop_back();
                }
                else {
                    dq.pop_front();
                }
                st.pop();
            }
        }
    }
    if (dq.empty()) {
        cout << 0 << '\n';
    }
    else {
        int sz = dq.size();
        for (int i = 0; i < sz; i++) {
            cout << dq[i];
        }
    }

    return 0;
}


