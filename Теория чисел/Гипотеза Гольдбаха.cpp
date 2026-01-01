#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

bool prime(int a, int n) {
    if (a < 3) return true;
    for (int i = 2; i <= (int)sqrt(n); ++i) {
        if (a % i == 0) return false;
    }
    return true;
}

signed main() {
    sonic;
    int n; cin >> n;
    for (int i = 2; i <= n; ++i) {
        if (prime(i, n) and prime(n - i, n)) {
            cout << i << " " << n - i << "\n"; return 0;
        }
    }
    return 0;
}