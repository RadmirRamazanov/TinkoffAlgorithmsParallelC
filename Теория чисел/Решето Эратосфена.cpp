#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

int main() {
    sonic;
    ll a, b; cin >> a >> b;
    vector<ll> primes(b + 1, true);
    for (ll i = 2; i <= b; ++i) {
        if (!primes[i]) continue;
        for (ll j = i * i; j <= b; j += i) {
            primes[j] = false;
        }
    }
    if (a < 2) a = 2;
    for (ll i = a; i <= b; ++i) {
        if (primes[i]) cout << i << " ";
    }
    return 0;
}