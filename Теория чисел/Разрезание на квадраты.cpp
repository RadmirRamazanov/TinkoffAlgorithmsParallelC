#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

int main() {
    sonic;
    ll a, b, ans = 0; cin >> a >> b;
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
        ans++;
    }
    cout << ans + 1 << "\n";
    return 0;
}