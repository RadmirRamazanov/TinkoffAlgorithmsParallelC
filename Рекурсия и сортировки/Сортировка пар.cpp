#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

signed main() {
    sonic;
    int n; cin >> n;
    vector<pair<int, int>> a;
    while (n--) {
        int b, c; cin >> b >> c;
        pair<int, int> p; p.first = b; p.second = c;
        a.pb(p);
    }
    sort(a.begin(), a.end(), [](auto a, auto b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second < b.second;
    });
    for (auto i : a) {
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}