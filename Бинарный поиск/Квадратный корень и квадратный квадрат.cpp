#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(double n) {
    double l = 0, r = n;
    for (ll i = 0; i < 200; ++i) {
        double mid = (l + r) / 2;
        double y = mid * mid + sqrt(mid);
        if (y >= n) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << fixed << setprecision(20) << r << "\n";
    return 0;
}

int main() {
    sonic;
    double n; cin >> n;
    sol(n);
    return 0;
}