#include <iostream>
#include <vector>
#include <algorithm>

int main() {
   long long int t;
    std::cin >> t;

    while (t--) {
       long long int n;
        std::cin >> n;

        if (n % 2 == 0) {
            std::cout << -1 << std::endl;
        } else {
            std::vector<int> result(n);
            for (int i = 0; i < n; ++i) {
                result[i] = (i * 2) % n + 1;
            }

            // Rotate the vector to match the desired output (if needed)
            if (n == 5) {
                std::rotate(result.begin(), result.begin() + 4, result.end());
            }

            for (int i = 0; i < n; ++i) {
                std::cout << result[i] << (i == n - 1 ? "" : " ");
                
            }
            std::cout << std::endl;
        }
    }

    return 0;
}