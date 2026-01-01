#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

vector<int> merge(const vector<int> &a, const vector<int> &b) {
    int cur_a = 0, cur_b = 0;
    vector <int> res;
    while (cur_a < a.size() && cur_b < b.size()) {
        res.push_back(a[cur_a] < b[cur_b] ?
                      a[cur_a++] : b[cur_b++]);
    }
    while (cur_a < a.size()) res.push_back(a[cur_a++]);
    while (cur_b < b.size()) res.push_back(b[cur_b++]);
    return res;
}

vector<int> merge_sort(const vector<int> &a) {
    if (a.size() == 1) return a;
    int m = a.size() / 2;
    vector<int> l, r;
    for (ll i = 0; i < m; i++) {
        l.push_back(a[i]);
    }
    for (ll i = m; i < a.size(); i++) {
        r.push_back(a[i]);
    }
    auto sl = merge_sort(l);
    auto rl = merge_sort(r);
    return merge(sl, rl);
}

int main() {
    sonic;
    int n; cin >> n;
    vector<int> a;
    while (n--) {
        int b; cin >> b;
        a.pb(b);
    }
    for (int i : merge_sort(a)) {
        cout << i << " ";
    }
    return 0;
}