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

int dp[4001][4001] = { 0, };

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string a, b;
    int cnt[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };
    cin >> a >> b;
    int n = a.length();
    for (int i = 0; i < n; i++) {
        dp[0][2 * i] = cnt[a[i] - 'A'];
        dp[0][2 * i + 1] = cnt[b[i] - 'A'];
    }
    for (int i = 1; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - i; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j + 1]) % 10;
            //cout << dp[i][j] << " ";
        }
        //cout << '\n';
    }
    cout << dp[2 * n - 2][0] << dp[2 * n - 2][1] << '\n';

    return 0;
}


