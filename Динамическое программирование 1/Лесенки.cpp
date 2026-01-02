#include <bits/stdc++.h>
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

signed main() {
    sonic;
    int n; cin >> n;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= i) {
                dp[i][j] += dp[i - 1][j - i];
            }
        }
    }
    cout << dp[n][n] << "\n";
    return 0;
}