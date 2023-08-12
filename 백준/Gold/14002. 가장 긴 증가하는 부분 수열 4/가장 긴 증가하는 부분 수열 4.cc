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
    int n, a[1001] = { 0, };
    int ans = 0;
    int d[1001] = { 0, };
    vector<int> seq[1001];
    vector<int> res;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        d[i] = 1;
        seq[i].push_back(a[i]);
        for (int j = i - 1; j >= 1; j--) {
            if (a[i] > a[j]) {
                if (d[i] < d[j] + 1) {
                    seq[i].clear();
                    seq[i] = seq[j];
                    seq[i].push_back(a[i]);
                    d[i] = d[j] + 1;
                }
            }
        }
        ans = max(d[i], ans);
        if (res.size() < seq[i].size()) {
            res = seq[i];
        }
    }
    ans = res.size();
    cout << ans << '\n';
    for (int i = 0; i < ans; i++) cout << res[i] << " ";
    return 0;
}


