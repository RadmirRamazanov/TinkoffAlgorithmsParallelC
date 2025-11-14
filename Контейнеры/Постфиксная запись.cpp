#include <iostream>
#include <string>
#include <stack>
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n) {
    stack<ll> z;
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;
        if (a == 0) {
            ll b; cin >> b;
            z.push(b);
        } else if (a == 1) {
            ll s = z.top(); z.pop();
            ll f = z.top(); z.pop();
            z.push(f + s);
        } else if (a == 2) {
            ll s = z.top(); z.pop();
            ll f = z.top(); z.pop();
            z.push(f - s);
        } else {
            ll s = z.top(); z.pop();
            ll f = z.top(); z.pop();
            z.push(f * s);
        }
    }
    return z.top();
}

int main() {
    sonic;
    ll n; cin >> n;
    cout << sol(n) << "\n";
    return 0;
}