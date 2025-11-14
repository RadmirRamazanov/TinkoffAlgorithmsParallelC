#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n, ll m) {
    vector<vector<ll>> matrix(n, vector<ll>(m));
    vector<vector<ll>> pref(n + 1, vector<ll>(m + 1));
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            ll a; cin >> a;
            matrix[i][j] = a;
        }
    }
    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= m; ++j) {
            pref[i][j] = matrix[i - 1][j - 1] + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
        }
    }
    ll c; cin >> c;
    while (c--) {
        ll lx, ly, rx, ry; cin >> lx >> ly >> rx >> ry;
        cout << pref[rx][ry] - pref[rx][ly - 1] - pref[lx - 1][ry] + pref[lx - 1][ly - 1] << " ";
    }
    return 0;
}

int main() {
    sonic;
    ll n, m; cin >> n >> m;
    sol(n, m);
    return 0;
}