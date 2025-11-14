#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n, ll q) {
    vector<ll> z(n);
    vector<ll> diff(n + 1);
    while (q--) {
        ll l, r, d; cin >> l >> r >> d;
        l--;
        diff[l] += d; diff[r] -= d;
    }
    vector<ll> pref(n + 1);
    for (ll i = 1; i <= n; ++i) {
        pref[i] = pref[i - 1] + diff[i - 1];
    }
    for (ll i = 1; i <= n; i++) {
        cout << pref[i] << " ";
    }
    return 0;
}

int main() {
    sonic;
    ll n, q; cin >> n >> q;
    sol(n, q);
    return 0;
}
