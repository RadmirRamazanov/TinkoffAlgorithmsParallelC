#include <iostream>
#include <vector>
#include <set>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;
typedef double dbl;

int main() {
    sonic;
    ll n; cin >> n;
    set<ll> z, x;
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a; z.insert(a);
    }
    ll k; cin >> k;
    for (ll i = 0; i < k; ++i) {
        ll a; cin >> a; x.insert(a);
    }
    set<ll> c;
    for (ll i : z) {
        if (x.find(i) == x.end()) c.insert(i);
    }
    for (ll i : x) {
        if (z.find(i) == z.end()) c.insert(i);
    }
    cout << c.size() << "\n";
    if (c.size()) {
        for (ll i : c) {
            cout << i << " ";
        }
    }
    return 0;
}
