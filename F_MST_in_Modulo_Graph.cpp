#include <iostream>
#include <vector>
#include <algorithm>

int find(std::vector<int>& p, int i) {
    return p[i] == i ? i : p[i] = find(p, p[i]);
}

int main() {
   long long int t;
    std::cin >> t;
    while (t--) {
        long long int n;
        std::cin >> n;
        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) std::cin >> v[i];
        std::vector<std::tuple<int, int, int>> edges;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                edges.emplace_back(v[i] % v[j] ? std::max(v[i], v[j]) % std::min(v[i], v[j]) : 0, i, j);
            }
        }
        std::sort(edges.begin(), edges.end());
        std::vector<int> p(n);
        for (int i = 0; i < n; ++i) p[i] = i;
        int sum = 0, count = 0;
        for (auto& [w, i, j] : edges) {
            int x = find(p, i), y = find(p, j);
            if (x != y) {
                p[x] = y;
                sum += w;
                if (++count == n - 1) break;
            }
        }
        std::cout << sum << std::endl;
    }
    return 0;
}