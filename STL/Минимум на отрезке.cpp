#include <iostream>
#include <vector>
#include <deque>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;
typedef double dbl;

int main() {
    sonic;
    ll n, k; cin >> n >> k;
    vector<ll> z;
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a; z.pb(a);
    }
    deque<ll> dq;
    for (ll i = 0; i < n; ++i) {
        while (!dq.empty() and z[dq.back()] > z[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (dq.front() <= i - k) {
            dq.pop_front();
        }
        if (i >= k - 1) {
            cout << z[dq.front()] << " ";
        }
    }
    return 0;
}