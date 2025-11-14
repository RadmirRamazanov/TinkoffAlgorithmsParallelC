#include <iostream>
#include <vector>
#include <iomanip>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

double sol(double a, double b, double c, double d) {
    double l = -1e6, r = 1e6;
    for (ll i = 0; i < 200; ++i) {
        double mid = (l + r) / 2;
        double urav = a * mid * mid * mid + b * mid * mid + c * mid + d;
        if (urav >= 0) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r;
}

int main() {
    sonic;
    double a, b, c, d; cin >> a >> b >> c >> d;
    if (a < 0) {
        a = -a; b = -b; c = -c; d = -d;
    }
    cout << fixed << setprecision(20) << sol(a, b, c, d) << "\n";
    return 0;
}