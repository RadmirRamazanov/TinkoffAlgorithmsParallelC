#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

signed main() {
    sonic;
    int a, p; cin >> a >> p;
    int m = p - 2;
    vector<char> z;
    while (m > 0) {
        if (m % 2 == 0) {
            z.pb('*'); m /= 2;
        } else {
            z.pb('+'); m -= 1;
        }
    }
    reverse(z.begin(), z.end());
    int ans = 1;
    for (char i : z) {
        if (i == '*') ans = (ans * ans) % p;
        else ans = (ans * a) % p;
    }
    cout << ans << "\n";
    return 0;
}