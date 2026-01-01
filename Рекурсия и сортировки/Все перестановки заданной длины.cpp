#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

void gen(string s, int n) {
    if (s.size() == n) {
        cout << s << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        char c = '0' + i;
        if (s.find(c) == string::npos) {
            gen(s + c, n);
        }
    }
}

signed main() {
    sonic;
    int n; cin >> n;
    gen("", n);
    return 0;
}