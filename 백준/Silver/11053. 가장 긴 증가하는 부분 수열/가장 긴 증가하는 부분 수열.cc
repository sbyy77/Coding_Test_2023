#include <iostream>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, a[1001] = { 0, };
    int ans = 0;
    int d[1001] = { 0, };
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        d[i] = 1;
        for (int j = i - 1; j >= 1; j--) {
            if (a[i] > a[j]) {
                d[i] = max(d[i], d[j] + 1);
            }
        }
        ans = max(d[i], ans);
    }
    cout << ans << '\n';
    return 0;
}