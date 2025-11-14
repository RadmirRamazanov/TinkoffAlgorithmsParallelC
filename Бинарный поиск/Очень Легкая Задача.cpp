#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n, ll m, ll q) {
    n--;
    ll l = 0, r = max(m, q) * n;
    while (l < r) {
        ll mid = (l + r) / 2;
        ll cop = mid / m + mid / q;
        if (cop < n) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    return r + min(m, q);
}

int main() {
    sonic;
    ll n, m, q; cin >> n >> m >> q;
    cout << sol(n, m, q) << "\n";
    return 0;
}