#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

signed main() {
    sonic;
    int n, m; cin >> n >> m;
    vector<vector<int>> dp(n, vector<int>(m));
    dp[0][0] = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i - 1 >= 0 and j - 2 >= 0) {
                dp[i][j] += dp[i - 1][j - 2];
            }
            if (i - 2 >= 0 and j - 1 >= 0) {
                dp[i][j] += dp[i - 2][j - 1];
            }
        }
    }
    cout << dp[n - 1][m - 1] << "\n";
    return 0;
}