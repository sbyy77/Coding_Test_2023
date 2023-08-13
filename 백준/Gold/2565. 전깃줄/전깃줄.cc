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
    int dp[101];
    vector<pair<int, int>> line;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        line.push_back(make_pair(a, b));
    }
    sort(line.begin(), line.end());

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (line[i].second > line[j].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        cnt = max(cnt, dp[i]);
    }
    cout << n - cnt << '\n';
    /*
    for (int i = 0; i < n; i++) {
        cout << line[i].first << line[i].second << '\n';
    }
    */

    return 0;
}


