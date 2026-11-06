#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int total_ones = 0;
        int original_ones = 0;
        for (char c : s) {
            if (c == '1') {
                original_ones++;
            }
        }

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                total_ones += (original_ones - 1);
            } else {
                total_ones += (original_ones + 1);
            }
        }

        cout << total_ones << endl;
    }

    return 0;
}
