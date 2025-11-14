#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n, ll k) {
    vector<ll> z;
    ll mx = 0, mn = 1e9;
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;
        if (a > mx) mx = a;
        if (a < mn) mn = a;
        z.pb(a);
    }
    ll l = 0, r = mx - mn, ans = 0;
    while (l <= r) {
        ll mid = (l + r) / 2, cur = 1, last_pos = z[0];
        for (ll i = 1; i < n; ++i) {
            if (z[i] - last_pos >= mid) {
                cur += 1;
                last_pos = z[i];
            }
        }
        if (cur >= k) {
            ans = mid;
            l = mid + 1;
        }
        else if (cur < k) r = mid - 1;
    }
    return ans;
}

int main() {
    sonic;
    ll n, k; cin >> n >> k;
    cout << sol(n, k) << "\n";
    return 0;
}