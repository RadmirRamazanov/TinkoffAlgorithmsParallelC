#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n) {
    vector<ll> nums;
    vector<ll> pref(n + 1);
    ll k = n;
    while (n--) {
        ll a; cin >> a;
        nums.pb(a);
    }
    for (ll i = 1; i <= k; ++i) {
        pref[i] = pref[i - 1] + nums[i - 1];
    }
    ll c; cin >> c;
    while (c--) {
        ll a, b; cin >> a >> b;
        cout << pref[b] - pref[a - 1] << " ";
    }
    return 0;
}

int main() {
    sonic;
    ll n; cin >> n;
    sol(n);
    return 0;
}