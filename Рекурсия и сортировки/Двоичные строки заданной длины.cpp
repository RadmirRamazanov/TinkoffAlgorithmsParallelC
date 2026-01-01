#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

void gen(string s, int n) {
    if (s.size() == n) {
        cout << s << '\n';
        return;
    }
    s += '0';
    gen(s, n);
    s.back() = '1';
    gen(s, n);
    s.pop_back();
}

signed main() {
    sonic;
    int n; cin >> n;
    gen("", n);
    return 0;
}