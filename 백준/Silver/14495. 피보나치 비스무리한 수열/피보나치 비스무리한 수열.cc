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

    ll dp[117];
    ll round;
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    
    for (int i = 4; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 3];
    }
    cout << dp[n] << '\n';

    return 0;
}


