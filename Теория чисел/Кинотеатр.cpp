#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

int gcd(int a, int b) {
    while (a and b) {
        if (a >= b) a %= b;
        else b %= a;
    }
    return a + b;
}

signed main() {
    sonic;
    int n, m; cin >> n >> m;
    cout << gcd(n - 1, m - 1) + 1 << "\n";
    return 0;
}