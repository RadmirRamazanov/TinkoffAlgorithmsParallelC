#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

int main() {
    sonic;
    string k;
    map<string, vector<string>> z;
    while (getline(cin, k)) {
        if (k.empty()) break;
        ll f = k.find('-');
        string val = k.substr(0, f - 1), key = k.substr(f + 1, k.size());
        string t;
        stringstream ss(key);
        while (getline(ss, t, ',')) {
            t.erase(0, 1);
            z[t].pb(val);
        }
    }
    cout << z.size() << "\n";
    for (auto item : z) {
        if (item.second.size() < 2) cout << item.first << " - " << item.second[0];
        else {
            sort(item.second.begin(), item.second.end());
            cout << item.first << " - ";
            for (auto i : item.second) {
                if (i != item.second[item.second.size() - 1]) cout << i << ", ";
                else cout << i;
            }
        }
        cout << "\n";
    }
    return 0;
}