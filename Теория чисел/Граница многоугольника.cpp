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
    int n; cin >> n;
    vector<pair<int, int>> z;
    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        pair<int, int> p; p.first = x; p.second = y;
        z.pb(p);
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (i == n - 1) {
            ans += gcd(abs(z[i].first - z[0].first), abs(z[i].second - z[0].second));
            continue;
        }
        ans += gcd(abs(z[i].first - z[i + 1].first),abs(z[i].second - z[i + 1].second));
    }
    cout << ans << "\n";
    return 0;
}