#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

void gen(int n, int st, vector<int>& s) {
    if (n == 0) {
        for (int i = 0; i < s.size(); i++) {
            cout << s[i];
            if (i < s.size() - 1) cout << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= st and i <= n; i++) {
        s.pb(i);
        gen(n - i, i, s);
        s.pob();
    }
}

signed main() {
    sonic;
    int n; cin >> n;
    vector<int> z;
    gen(n, n, z);
    return 0;
}