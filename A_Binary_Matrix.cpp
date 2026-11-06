#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, m;
        std::cin >> n >> m;

        for (int i = 0; i < n; ++i) {
            std::string row;
            std::cin >> row;
        }

        if (n % 2 == 0 && m % 2 == 0) {
            std::cout << 0 << std::endl;
        } else if (n % 2 == 1 && m % 2 == 1) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << 1 << std::endl;
        }
    }

    return 0;
}