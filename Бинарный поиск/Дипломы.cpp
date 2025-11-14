#include <iostream>
#include <vector>
#include <iomanip>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll w, ll h, ll n) {
    ll l = 0, r = max(w, h) * n;
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll d = (mid / w) * (mid / h);
        if (d >= n) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return l;
}

int main() {
    sonic;
    ll w, h, n; cin >> w >> h >> n;
    cout << sol(w, h, n) << "\n";
    return 0;
}