#include <iostream>
#include <cmath>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll k) {
    ll l = 1, r = 1e16, a = -1;
    while (l <= r) {
        ll m = l + (r - l) / 2;
        ll s = (ll)sqrt(m);
        ll c = (ll)cbrt(m);
        ll x = (ll)pow(m, 1.0/6.0);
        if (s + c - x >= k) {
            a = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return a;
}

int main() {
    sonic;
    ll n; cin >> n;
    cout << sol(n) << "\n";
    return 0;
}