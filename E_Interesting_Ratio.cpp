#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int limit) {
    vector<bool> is_prime(limit + 1, true);
    if (limit >= 2) {
        is_prime[0] = is_prime[1] = false;
        for (int p = 2; p * p <= limit; ++p) {
            if (is_prime[p]) {
                for (int i = p * p; i <= limit; i += p) {
                    is_prime[i] = false;
                }
            }
        }
    } else {
        if (limit >= 0) is_prime[0] = false;
        if (limit >= 1) is_prime[1] = false;
    }
    return is_prime;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        vector<bool> is_prime = sieve(n);
        long long int count = 0;

        if (n >= 2) {
            for (int b = 2; b <= n; ++b) {
                for (int a = 1; a < b; ++a) {
                    int gcd_val = gcd(a, b);
                    long long lcm_val = (long long)a * (b / gcd_val); // Reordered calculation
                    long long f_ab = lcm_val / gcd_val;

                    if (f_ab <= n && is_prime[f_ab]) {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}