#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <tuple>

using namespace std;

bool solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<int> a_list(n), b_list(n);
    for (int i = 0; i < n; ++i) {
        a_list[i] = a[i] - '0';
        b_list[i] = b[i] - '0';
    }

    queue<tuple<vector<int>, vector<int>>> q;
    set<pair<string, string>> visited;

    q.push({a_list, b_list});

    while (!q.empty()) {
        auto [curr_a, curr_b] = q.front();
        q.pop();

        string a_str, b_str;
        for (int x : curr_a) a_str += to_string(x);
        for (int x : curr_b) b_str += to_string(x);

        if (a_str.find('1') == string::npos) {
            return true;
        }

        if (visited.find({a_str, b_str}) != visited.end()) {
            continue;
        }
        visited.insert({a_str, b_str});

        for (int i = 1; i < n; ++i) {
            vector<int> next_a1 = curr_a;
            vector<int> next_b1 = curr_b;
            swap(next_a1[i], next_b1[i - 1]);
            q.push({next_a1, next_b1});

            vector<int> next_a2 = curr_a;
            vector<int> next_b2 = curr_b;
            swap(next_b2[i], next_a2[i - 1]);
            q.push({next_a2, next_b2});
        }
    }
    return false;
}

int main() {
    if (solve()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}