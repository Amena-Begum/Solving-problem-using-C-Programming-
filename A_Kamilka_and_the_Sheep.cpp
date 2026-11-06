
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <unordered_set>

using namespace std;

int compute_max_gcd(const vector<int>& a) {
    int max_gcd = 0;
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int diff = abs(a[i] - a[j]);
            if (diff == 0) continue;
            max_gcd = max(max_gcd, diff);
        }
    }
    return max_gcd;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }  int max_diff = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int diff = abs(a[i] - a[j]);
                if (diff > max_diff) {
                    max_diff = diff;
                }
            }
        }
        cout << max_diff << '\n';
    }
    return 0;
}