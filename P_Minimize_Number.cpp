#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
     cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
            cin >> a[i];
    }

    int sum = 0;
    bool flag = true;

    while (flag) {
        bool all_even = true;
        for (int x : a) {
            if (x % 2 != 0) {
                all_even = false;
                break;
            }
        }

        if (all_even) {
            sum++;
            for (int i = 0; i < n; i++) {
                a[i] /= 2;
            }
        } else {
            flag = false;
        }
    }

    cout << sum << endl;

    return 0;
}