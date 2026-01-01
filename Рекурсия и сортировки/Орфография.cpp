#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define int long long
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long double ld;

string g(string s) {
    int n = s.length();
    if (n > 0) {
        int mid = (n + 1) / 2 - 1;
        return g(s.substr(1, mid)) + s[0] + g(s.substr(mid + 1));
    }
    return "";
}

signed main() {
    sonic;
    string s; getline(cin, s);
    cout << g(s) << "\n";
    return 0;
}