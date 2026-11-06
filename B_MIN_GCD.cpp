#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    std::cin >> t;
    std::vector<std::string> res;

    for (int _t = 0; _t < t; ++_t) {
       long long int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int m = *std::min_element(arr.begin(), arr.end());
        int cnt = std::count(arr.begin(), arr.end(), m);

        if (cnt == n) {
            res.push_back("Yes");
            continue;
        }
        if (cnt >= 2) {
            res.push_back("Yes");
            continue;
        }

        std::vector<int> B;
        for (int x : arr) {
            if (x % m == 0 && x != m) {
                B.push_back(x);
            }
        }
        if (B.empty()) {
            res.push_back("No");
            continue;
        }

       long long int g = 0;
        for (int x : B) {
            int k = x / m;
            g = gcd(g, k);
        }

        res.push_back(g == 1 ? "Yes" : "No");
    }

    for (const std::string& s : res) {
        std::cout << s << std::endl;
    }

    return 0;
}