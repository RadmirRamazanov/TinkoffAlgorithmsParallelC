#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

void f(int n, int k, int s, int d, vector<int>& a) {
    if (d == k) {
        for (int i = 0; i < k; i++) {
            cout << a[i];
            if (i < k - 1) cout << " ";
        }
        cout << endl;
        return;
    }
    if (s < k - d) return;
    for (int i = 1; i <= s; i++) {
        a[d] = i;
        f(n, k, i - 1, d + 1, a);
    }
}

signed main() {
    sonic;
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    f(n, k, n, 0, a);
    return 0;
}