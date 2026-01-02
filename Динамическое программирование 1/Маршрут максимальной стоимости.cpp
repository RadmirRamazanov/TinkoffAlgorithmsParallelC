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
    vector<vector<int>> mtrx;
    for (int i = 0; i < n; ++i) {
        vector<int> z;
        for (int j = 0; j < m; ++j) {
            int a; cin >> a; z.pb(a);
        }
        mtrx.pb(z);
    }
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            dp[i][j] += max(dp[i - 1][j], dp[i][j - 1]) + mtrx[i - 1][j - 1];
        }
    }
    vector<char> ans;
    int i = n, j = m;
    while (i > 1 || j > 1) {
        if (i > 1 && (j == 1 || dp[i - 1][j] > dp[i][j - 1])) {
            ans.pb('D');
            i--;
        } else {
            ans.pb('R');
            j--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << dp[n][m] << "\n";
    for (int k = 0; k < ans.size(); ++k) {
        cout << ans[k];
        if (k < ans.size() - 1) cout << " ";
    }
    return 0;
}