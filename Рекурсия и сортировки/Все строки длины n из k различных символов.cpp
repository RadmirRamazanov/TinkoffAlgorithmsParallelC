#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

void gen(int n, int k, string& s) {
    if (s.length() == n) {
        cout << s << '\n';
        return;
    }
    for (int i = 0; i < k; i++) {
        s.push_back('0' + i);
        gen(n, k, s);
        s.pop_back();
    }
}

signed main() {
    sonic;
    int n, k; cin >> n >> k;
    string s;
    gen(n, k, s);
    return 0;
}