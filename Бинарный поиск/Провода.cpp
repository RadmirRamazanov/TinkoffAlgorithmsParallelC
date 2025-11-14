#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n, ll k) {
    vector<ll> z;
    ll mx = 0;
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;
        if (a > mx) mx = a;
        z.pb(a);
    }
    ll l = 1, r = mx, ans = 0;
    while (l <= r) {
        ll mid = (l + r) / 2, cur = 0;
        for (ll i : z) {
            cur += i / mid;
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