#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n, ll m, ll q) {
    vector<vector<ll>> D(n + 2, vector<ll>(m + 2));
    vector<vector<ll>> pref(n + 1, vector<ll>(m + 1));
    while (q--) {
        ll x1, y1, x2, y2;
        ll d;
        cin >> x1 >> y1 >> x2 >> y2 >> d;
        D[x1][y1] += d;
        if (x2 + 1 <= n) D[x2 + 1][y1] -= d;
        if (y2 + 1 <= m) D[x1][y2 + 1] -= d;
        if (x2 + 1 <= n and y2 + 1 <= m) D[x2 + 1][y2 + 1] += d;
    }
    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= m; ++j) {
            pref[i][j] = D[i][j] + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
        }
    }
    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= m; ++j) {
            cout << pref[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

int main() {
    sonic;
    ll n, m, q; cin >> n >> m >> q;
    sol(n, m, q);
    return 0;
}