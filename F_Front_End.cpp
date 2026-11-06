#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (n > 0) {
        int left = 0;
        int right = n - 1;
        bool first_print = true;

        while (left <= right) {
            if (!first_print) {
                std::cout << " ";
            }

            if (left == right) {
                std::cout << a[left];
            } else {
                std::cout << a[left] << " " << a[right];
            }

            left++;
            right--;
            first_print = false;
        }
        std::cout << std::endl;
    } else {
        std::cout << std::endl;
    }

    return 0;
}