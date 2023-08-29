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
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = 0; i < 10; i++) {
        n++;
        if (n > 8) break;
        int maj, nmaj;
        cin >> maj >> nmaj;
        a += maj * 3;
        b += maj * 3;
        if (6 - maj <= nmaj) {
            b += (6 - maj) * 3;
        }
        else {
            b += nmaj * 3;
        }
    }
    if (a >= 66 && b >= 130) {
        cout << "Nice\n";
    }
    else {
        cout << "Nae ga wae\n";
    }

    return 0;
}


