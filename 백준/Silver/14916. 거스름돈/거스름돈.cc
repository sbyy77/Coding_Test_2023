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
    int cnt = 0;
    cin >> n;
    if (n == 1 || n == 3) {
        cout << -1 << '\n';
        return 0;
    }
    if ((n % 5) % 2) {
        cnt = n / 5;
        cnt--;
        n %= 5;
        n += 5;
        cnt += n / 2;
    }
    else {
        cnt = n / 5;
        n %= 5;
        cnt += n / 2;
    }
    cout << cnt << '\n';
    return 0;
}


