#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> p;
    if (x == n) {
        for (int i = 0; i < n; ++i) {
            p.push_back(i);
        }
    } else {
        for (int i = 0; i < x; ++i) {
            p.push_back(i);
        }
        for (int i = x + 1; i < n; ++i) {
            p.push_back(i);
        }
        p.push_back(x);
    }

    for (int i = 0; i < n; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
