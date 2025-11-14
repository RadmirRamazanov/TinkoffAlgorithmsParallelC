#include <iostream>
#include <string>
#include <stack>
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n) {
    stack<ll> z;
    stack<ll> mns;
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;
        if (a == 1) {
            ll b; cin >> b;
            z.push(b);
            if (mns.empty() or b <= mns.top()) {
                mns.push(b);
            }
        } else if (a == 2) {
            if (z.top() == mns.top() and not mns.empty()) {
                mns.pop();
            }
            cout << z.top() << "\n"; z.pop();
        } else {
            if (not mns.empty()) {
                cout << mns.top() << "\n";
            }
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
