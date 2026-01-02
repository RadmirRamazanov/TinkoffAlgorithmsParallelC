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
    vector<int> dp(n + 1);
    dp[0] = 1; dp[1] = 2; dp[2] = 4;
    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    cout << dp[n] << "\n";
    return 0;
}