#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#define err 1e-13
/* 20201650 */
using namespace std;
typedef long long ll;
typedef double db;


int main() {
	ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll dp[81];
    ll round;
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 1;
    if (n == 1) {
        cout << 4 << '\n';
        return 0;
    }
    else if (n == 2) {
        cout << 6 << '\n';
        return 0;
    }
    else if (n == 3) {
        cout << 10 << '\n';
        return 0;
    }
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    round = dp[n] * 3 + (dp[n - 1] + dp[n - 2]) * 2 + dp[n - 3];

    cout << round << '\n';

    return 0;
}


