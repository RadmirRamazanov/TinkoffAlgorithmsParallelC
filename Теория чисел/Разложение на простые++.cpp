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

bool isprime(ll n) {
    for (ll i = 2; i <= (ll)sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    sonic;
    ll x; cin >> x;
    bool f = true;
    for (ll i = 2; i <= (ll)sqrt(x); ++i) {
        if (x % i == 0 and isprime(i)) {
            ll step = 0;
            while (x % i == 0) {
                x /= i;
                step += 1;
            }
            if (!f) cout << "*";
            if (step != 1) cout << i << "^" << step;
            else cout << i;
            f = false;
        }
        if (x == 1) break;
    }
    if (x > 1) {
        if (!f) cout << "*";
        cout << x << "\n";
    }
    return 0;
}