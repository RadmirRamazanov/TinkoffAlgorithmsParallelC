#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n, ll m, ll k) {
    vector<vector<vector<ll>>> parallelip(n, vector<vector<ll>>(m, vector<ll>(k)));
    vector<vector<vector<ll>>> prefix(n + 1, vector<vector<ll>>(m + 1, vector<ll>(k + 1)));
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            for (ll x = 0; x < k; ++x) {
                ll a; cin >> a;
                parallelip[i][j][x] = a;
            }
        }
    }
    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= m; ++j) {
            for (ll x = 1; x <= k; ++x) {
                prefix[i][j][x] = parallelip[i - 1][j - 1][x - 1] + prefix[i - 1][j][x] + prefix[i][j - 1][x] + prefix[i][j][x - 1] - prefix[i - 1][j - 1][x] - prefix[i - 1][j][x - 1] - prefix[i][j - 1][x - 1] + prefix[i - 1][j - 1][x - 1];
            }
        }
    }
    ll c; cin >> c;
    while (c--) {
        ll lx, ly, lz, rx, ry, rz; cin >> lx >> ly >> lz >> rx >> ry >> rz;
        ll ans = prefix[rx][ry][rz] - prefix[lx - 1][ry][rz] - prefix[rx][ly - 1][rz] - prefix[rx][ry][lz - 1] + prefix[lx - 1][ly - 1][rz] + prefix[lx - 1][ry][lz - 1] + prefix[rx][ly - 1][lz - 1] - prefix[lx - 1][ly - 1][lz - 1];
        cout << ans << " ";
    }
    return 0;
}

int main() {
    sonic;
    ll n, m, k; cin >> n >> m >> k;
    sol(n, m, k);
    return 0;
}
