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
    string str;
    int cnt, len, st;
    cin >> str;
    len = str.length();
    cnt = 0;
    st = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == '.' || i == len - 1) {
            if (str[i] == 'X') cnt++;
            if (cnt % 2) {
                cout << -1 << '\n';
                return 0;
            }
            else {
                if (cnt % 4) {
                    int q = cnt / 4;
                    for (int j = st; j < st + q * 4; j++) {
                        str[j] = 'A';
                    }
                    str[st + q * 4] = 'B';
                    str[st + q * 4 + 1] = 'B';
                }   // 4로 안 나누어 떨어질 때
                else {
                    for (int j = st; j < st + cnt; j++) {
                        str[j] = 'A';
                    }
                }   // 4로 나누어 떨어질 때
            }
            st = i + 1;
            cnt = 0;
        }
        else {
            cnt++;
        }
    }
    cout << str << '\n';

    return 0;
}


