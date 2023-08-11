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

db arr[51] = { 0, };
vector<int> basket[51];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll res = 0, mul = 1, mod = 1e9 + 7;
	string s;
	cin >> s;
	int size = s.length();
	for (int i = 0; i < size; i++) {
		if (s[i] == 'O') {
			res += mul;
		}
		res %= mod;
		mul *= 2;
		mul %= mod;
	}
	cout << res << '\n';

	return 0;
}


