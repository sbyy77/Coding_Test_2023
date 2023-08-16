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

    int n;
    int p[1001];
    int dp[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = p[i];
        for (int j = 1; j < i; j++) {
            dp[i] = min(dp[i], dp[i - j] + dp[j]);
        }
    }
    cout << dp[n];

    return 0;
}


