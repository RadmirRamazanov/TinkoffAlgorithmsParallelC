#include <iostream>
#include <vector>
#include <stack>
#define pb push_back
#define pob pop_back
#define sonic ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
typedef long long ll;

ll sol() {
    int a;
    cin >> a;
    stack<int> b;
    for (int c = 0; c < a; c++) {
        int d;
        cin >> d;
        if (d == 0) {
            int e;
            cin >> e;
            b.push(0);
        } else {
            int f = b.top();
            b.pop();
            int g = b.top();
            b.pop();
            int h = max(f, g) + 1;
            b.push(h);
        }
    }
    cout << b.top() << endl;
    return 0;
}

int main() {
    sonic;
    sol();
    return 0;
}