#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        if (n % 2 == 0) {
            std::cout << -1 << std::endl;
        } else {
            std::vector<int> res;
            res.push_back(n);
            for (int i = 1; i < n; ++i) {
                res.push_back(i);
            }
            for (const auto& num : res) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
    }
    return 0;
}