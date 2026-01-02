#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

signed main() {
    sonic;
    int n; cin >> n;
    vector<int> z(n);
    for (int i = 0; i < n; ++i) {int a; cin >> a; z[i] = a;}
    vector<int> dp(n + 1);
    dp[0] = 0; dp[1] = z[0];
    for (int i = 2; i <= n; ++i) {
        dp[i] += min(dp[i - 1], dp[i - 2]) + z[i - 1];
    }
    cout << dp[n] << "\n";
    return 0;
}