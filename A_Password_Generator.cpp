#include <bits/stdc++.h>
using namespace std;

string generate_password(int a, int b, int c) {
    string digits, uppercase, lowercase;
    string password;

    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<> digit_dist(0, 9);
    uniform_int_distribution<> upper_dist(0, 25);
    uniform_int_distribution<> lower_dist(0, 25);

    for (int i = 0; i < a; ++i) {
        digits += to_string(digit_dist(generator));
    }
    for (int i = 0; i < b; ++i) {
        uppercase += 'A' + upper_dist(generator);
    }
    for (int i = 0; i < c; ++i) {
        lowercase += 'a' + lower_dist(generator);
    }

    password = digits + uppercase + lowercase;
    shuffle(password.begin(), password.end(), generator);

    return password;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << generate_password(a, b, c) << endl;
    }
    return 0;
}