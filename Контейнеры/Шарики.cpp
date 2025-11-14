#include <iostream>
#include <stack>
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol(ll n) {
    stack<pair<ll, ll>> nums;
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;
        if (not nums.empty() and nums.top().first == a) {
            nums.top().second++;
        } else {
            if (not nums.empty() and nums.top().second >= 3) {
                ans += nums.top().second;
                nums.pop();
            }
            if (not nums.empty() and nums.top().first == a) {
                nums.top().second++;
            } else {
                nums.push({a, 1});
            }
        }
        if (i == n - 1) {
            if (not nums.empty() and nums.top().second >= 3) {
                ans += nums.top().second;
                nums.pop();
            }
        }
    }
    return ans;
}

int main() {
    sonic;
    ll n; cin >> n;
    cout << sol(n) << "\n";
    return 0;
}
