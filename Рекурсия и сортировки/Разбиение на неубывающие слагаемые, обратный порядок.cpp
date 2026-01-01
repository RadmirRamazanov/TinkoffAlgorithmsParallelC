#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

vector<vector<int>> all;

void gen(int n, int st, vector<int>& s) {
    if (n == 0) {
        all.pb(s);
        return;
    }
    for (int i = st; i <= n; i++) {
        s.pb(i);
        gen(n - i, i, s);
        s.pob();
    }
}

signed main() {
    sonic;
    int n; cin >> n;
    vector<int> z;
    for (int first = 1; first <= n; first++) {
        z.pb(first);
        gen(n - first, first, z);
        z.pob();
    }
    for (int i = all.size() - 1; i >= 0; i--) {
        for (int j = 0; j < all[i].size(); j++) {
            cout << all[i][j];
            if (j < all[i].size() - 1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}