#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;
typedef double dbl;

int main() {
    sonic;
    ll x; cin >> x;
    vector<ll> z;
    for (ll i = 1; i <= (ll)sqrt(x); ++i) {
        if (x % i == 0) {
            z.pb(i);
            if (x / i != i) z.pb(x / i);
        }
    }
    cout << z.size() << "\n";
    sort(z.begin(), z.end());
    for (ll i : z) {
        cout << i << " ";
    }
    return 0;
}