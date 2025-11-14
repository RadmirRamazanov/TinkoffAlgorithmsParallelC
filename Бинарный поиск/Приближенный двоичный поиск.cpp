#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll binsearch(const vector<ll> &z, ll a) {
    ll l = 0, r = z.size() - 1;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (a < z[mid]) {
            r = mid - 1;
        } else if (a > z[mid]) {
            l = mid + 1;
        } else {
            return mid;
        }
    }
    return l;
}

ll sol(ll n, ll m) {
    vector<ll> z;
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;
        z.pb(a);
    }
    for (ll i = 0; i < m; ++i) {
        ll a; cin >> a;
        auto indx = binsearch(z, a);
        if (indx - 1 >= 0) {
            if (abs(a - z[indx - 1]) <= abs(a - z[indx])) {
                cout << z[indx - 1] << "\n";
            } else {
                cout << z[indx] << "\n";
            }
        } else {
            cout << z[indx] << "\n";
        }
    }
    return 0;
}

int main() {
    sonic;
    ll n, m; cin >> n >> m;
    sol(n, m);
    return 0;
}