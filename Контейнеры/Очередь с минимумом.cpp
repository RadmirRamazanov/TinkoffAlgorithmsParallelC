#include <iostream>
#include <deque>
#include <algorithm>
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n) {
    deque<ll> z;
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;
        if (a == 1) {
            ll b; cin >> b;
            z.push_back(b);
        } else if (a == 2) {
            cout << z.front() << "\n";
            z.pop_front();
        } else if (a == 3) {
            ll b; cin >> b;
            cout << z[b - 1] << "\n";
        }
        else if (a == 4) {
            cout << *min_element(z.begin(), z.end()) << "\n";
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