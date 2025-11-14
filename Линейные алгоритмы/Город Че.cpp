#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n, ll m) {
    vector<ll> z;
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a; z.pb(a);
    }
    ll l = 0, r = 1, ans = 0;
    for (ll i = 0; i < n - 1; ++i) {
        while (r < n and z[r] - z[l] <= m) {
            r++;
        }
        ans += n - r; l++;
    }
    return ans;
}

int main() {
    sonic;
    ll n, m; cin >> n >> m;
    cout << sol(n, m) << "\n";
    return 0;
}