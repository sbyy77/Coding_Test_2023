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

int arr[1001][1001] = { 0, };

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, m;
    int mod = 1e9 + 7;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        arr[i][1] = 1;
    }
    for (int j = 2; j <= m; j++) {
        arr[1][j] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            arr[i][j] = (arr[i][j - 1] + arr[i - 1][j - 1]) % mod;
            arr[i][j] = (arr[i][j] + arr[i - 1][j]) % mod;
        }
    }
    cout << arr[n][m] << '\n';

    return 0;
}


