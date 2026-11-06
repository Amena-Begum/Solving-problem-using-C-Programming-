#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        long long s;
        std::cin >> n >> s;
        if (1LL * n * (n + 1) / 2 < s) {
            std::cout << -1 << std::endl;
            continue;
        }
        int result[n];
        int count = 0;
        long long current_sum = 0;
        for (int i = n; i >= 1; --i) {
            if (current_sum + i <= s) {
                result[count++] = i;
                current_sum += i;
            }
        }
        if (current_sum == s) {
            for (int i = 0; i < count; ++i) {
                std::cout << result[i] << (i == count - 1 ? "" : " ");
            }
            std::cout << std::endl;
        } else {
            std::cout << -1 << std::endl;
        }
    }
    return 0;
}