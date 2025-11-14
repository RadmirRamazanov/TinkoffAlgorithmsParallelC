#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol() {
    vector<ll> a, b, c, d;
    ll n; cin >> n;
    while (n--) {
        ll z; cin >> z;
        a.pb(z);
    }
    cin >> n;
    while (n--) {
        ll z; cin >> z;
        b.pb(z);
    }
    cin >> n;
    while (n--) {
        ll z; cin >> z;
        c.pb(z);
    }
    cin >> n;
    while (n--) {
        ll z; cin >> z;
        d.pb(z);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    ll lx = 0, ly = 0, rx = 0, ry = 0, mn_diff = 1e10;
    vector<ll> ans_data;
    while (lx < a.size() and ly < b.size() and rx < c.size() and ry < d.size()) {
        ll mn = min(a[lx], min(b[ly], min(c[rx], d[ry])));
        ll mx = max(a[lx], max(b[ly], max(c[rx], d[ry])));
        if (mx - mn < mn_diff) {
            mn_diff = mx - mn;
            ans_data.clear();
            ans_data.pb(a[lx]);
            ans_data.pb(b[ly]);
            ans_data.pb(c[rx]);
            ans_data.pb(d[ry]);
        }
        if (a[lx] == mn) {
            lx++;
        }
        else if (b[ly] == mn) {
            ly++;
        }
        else if (c[rx] == mn) {
            rx++;
        }
        else if (d[ry] == mn) {
            ry++;
        }
    }
    for (ll i : ans_data) {
        cout << i << " ";
    }
    return 0;
}

int main() {
    sonic;
    sol();
    return 0;
}
