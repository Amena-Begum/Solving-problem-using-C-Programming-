#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long factor = 1;

        if (n <= 0) {
            factor = 1;
        } else {
            for (int i = 1; i <= n; i++) {
                factor *= i;
            }
        }
        cout << factor << endl;
    }
    return 0;
}