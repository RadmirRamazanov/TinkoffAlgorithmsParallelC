#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;
typedef double dbl;

int main() {
    sonic;
    ll n; cin >> n;
    unordered_map<string, vector<vector<string>>> z;
    while (n--) {
        vector<string> x;
        string a, b, c, d; cin >> a >> b >> c >> d;
        x.pb(a); x.pb(b); x.pb(d);
        z[c].pb(x);
    }
    for (pair<const string, vector<vector<string>>>& item : z) {
        sort(item.second.begin(), item.second.end(), [](vector<string> a, vector<string> b) {
            return a[0] < b[0];
        });
    }
    vector<pair<string, vector<vector<string>>>> sorted_map(z.begin(), z.end());
    sort(sorted_map.begin(), sorted_map.end(), [](const auto& a, const auto& b) {
        ll numA = stoi(a.first.substr(0, a.first.size() - 1));
        ll numB = stoi(b.first.substr(0, b.first.size() - 1));
        if (numA != numB) return numA < numB;
        return a.first.back() < b.first.back();
    });
    for (pair<string, vector<vector<string>>> item : sorted_map) {
        if (item.second.size() == 1) {
            cout << item.first << " ";
            for (vector<string> i : item.second) {
                for (string j : i) {
                    cout << j << " ";
                }
            }
            cout << "\n";
        } else {
            for (ll i = 0; i < item.second.size(); ++i) {
                cout << item.first << " ";
                for (string j : item.second[i]) {
                    cout << j << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}