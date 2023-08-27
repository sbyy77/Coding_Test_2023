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
    int n, tmp, sum = 0;
    int mnodd = 0, mneven = 0;
    int a[1001] = { 0, };
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (!mnodd && a[i] % 2) {
            mnodd = a[i];
        }
        if (!mneven && !(a[i] % 2)) {
            mneven = a[i];
        }
        if (!mnodd && !mneven) break;
    }
    if (sum % 2) {
        if (!mnodd) {
            cout << 0 << '\n';
        }
        else {
            cout << sum - mnodd << '\n';
        }
    }
    else {
        cout << sum << '\n';
    }


    return 0;
}


