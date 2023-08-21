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

    int paskal[31][31] = { 0, };
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        paskal[i][1] = 1;
        paskal[i][i] = 1;
    }
    for (int i = 3; i <= n; i++) {
        for (int j = 2; j <= i - 1; j++) {
            paskal[i][j] = paskal[i - 1][j - 1] + paskal[i - 1][j];
        }
    }
    /*
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << paskal[i][j] << " ";
        }
        cout << '\n';
    }
    */
    cout << paskal[n][k] << '\n';

    return 0;
}


