#include <iostream>
#include <deque>
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n) {
    deque<pair<ll, ll>> nums;
    while (n--) {
        ll a; cin >> a;
        if (a == 1) {
            ll x, c; cin >> x >> c;
            pair<ll, ll> l;
            l.first = c; l.second = x;
            nums.push_back(l);
        } else {
            ll c, sum = 0; cin >> c;
            while (c > 0) {
                ll t = min(c, nums.front().first);
                c -= t;
                sum += nums.front().second * t;
                nums.front().first -= t;
                if (nums.front().first == 0) {
                    nums.pop_front();
                }
            }
            cout << sum << "\n";
        }
    }
    return 0;
}

int main() {
    sonic;
    ll n; cin >> n;
    sol(n);
    return 0;
}
