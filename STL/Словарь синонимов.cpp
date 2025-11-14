#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;
typedef double dbl;

int main() {
    sonic;
    ll n; cin >> n;
    unordered_map<string, string> z;
    while (n--) {
        string a, b; cin >> a >> b;
        z[a] = b;
    }
    string cur; cin >> cur;
    for (pair<string, string> item : z) {
        if (item.first == cur) cout << item.second << "\n";
        else if (item.second == cur) cout << item.first << "\n";
    }
    return 0;
}