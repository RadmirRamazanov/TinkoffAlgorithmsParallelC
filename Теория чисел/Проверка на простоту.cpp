#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;
typedef double dbl;

int main() {
    sonic;
    ll x; cin >> x;
    for (ll i = 2; i <= (ll)sqrt(x); ++i) {
        if (x % i == 0) {
            cout << "composite" << "\n";
            return 0;
        }
    }
    cout << "prime" << "\n";
    return 0;
}