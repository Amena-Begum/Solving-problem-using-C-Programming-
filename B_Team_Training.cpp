#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int teams = 0;
        int remaining = n;
        int left = 0;

        while (remaining > 0) {
            int teamSize = 1;
            while (left + teamSize <= n && (long long)teamSize * a[n - teamSize - left] < x) {
                teamSize++;
            }

            if (left + teamSize > n) {
                break;
            }
            teams++;
            remaining -= teamSize;
            left += teamSize;
        }

        cout << teams << endl;
    }

    return 0;
}