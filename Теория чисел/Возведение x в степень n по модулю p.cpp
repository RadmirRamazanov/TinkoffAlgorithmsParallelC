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
    ll x, n, p; cin >> x >> n >> p;
    vector<char> z;
    while (n > 0) {
        if (n % 2 == 0) {
            z.pb('*'); n /= 2;
        } else {
            z.pb('+'); n -= 1;
        }
    }
    reverse(z.begin(), z.end());
    ll ans = 1;
    for (char i : z) {
        if (i == '*') ans = (ans * ans) % p;
        else ans = (ans * x) % p;
    }
    cout << ans << "\n";
    return 0;
}