#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

void gen(string &s, int n, int k, int cnt) {
    if (cnt > k || cnt + n - s.size() < k) return;
    if (s.size() == n) {
        cout << s << '\n';
        return;
    }
    s += '0';
    gen(s, n, k, cnt);
    s.back() = '1';
    gen(s, n, k, cnt + 1);
    s.pop_back();
}


signed main() {
    sonic;
    int n, k; cin >> n >> k;
    string s;
    gen(s, n, k, 0);
    return 0;
}