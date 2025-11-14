#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n) {
    vector<ll> z;
    while (n--) {
        ll a; cin >> a;
        z.pb(a);
    }
    ll l = 0, r = 0, sum = 0, max = 0;
    while (r < z.size()) {
        if (sum + z[r] <= 0) {
            l = r;
            l++; r++;
            sum = 0;
            continue;
        }
        sum += z[r];
        r++;
        if (sum > max) {
            max = sum;
        }
    }
    return max;
}

int main() {
    sonic;
    ll n; cin >> n;
    cout << sol(n) << "\n";
    return 0;
}