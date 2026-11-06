#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
    } else if (n == 2) {
        cout << 1 << endl;
    } else {
        long long t1 = 0, t2 = 1;
        long long nextterm;
        for (int i = 3; i <= n; i++) {
            nextterm = t1 + t2;
            t1 = t2;
            t2 = nextterm;
        }
        cout << nextterm << endl;
    }
    return 0;
}