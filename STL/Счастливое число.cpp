#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

signed main() {
    sonic;
    int t; cin >> t;
    while (t--) {
        int n, k, ans = 0; cin >> n >> k;
        unordered_map<int, int> p;
        for (int i = 0; i < n; ++i) {
            int a; cin >> a;
            if (p.find(k - a) != p.end()) ans += p[k - a];
            p[a]++;
        }
        cout << ans << "\n";
    }
    return 0;
}