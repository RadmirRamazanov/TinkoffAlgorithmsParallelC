#include <iostream>
#include <vector>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    while (a != 0 and b != 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

int main() {
    sonic;
    ll a, b, c; cin >> a >> b >> c;
    if (c % gcd(a, b) != 0) {
        cout << "Impossible" << "\n";
        return 0;
    }
    ll x0 = 1, y0 = 0; // кэфы a
    ll x1 = 0, y1 = 1; // кэфы б
    ll ax = a, bx = b;
    while (bx != 0) {
        ll q = ax / bx;
        ll x_tmp = x0 - q * x1;
        ll y_tmp = y0 - q * y1;
        x0 = x1; y0 = y1;
        x1 = x_tmp; y1 = y_tmp;
        ll r = ax % bx;
        ax = bx;
        bx = r;
    } // когда б станет 0, кэфы(x0, y0) * k - ответы
    ll k = c / gcd(a, b);
    ll x = x0 * k;
    ll y = y0 * k;
    cout << gcd(a, b) << " " << x << " " << y << "\n";
    return 0;
}