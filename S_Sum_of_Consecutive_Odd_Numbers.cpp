#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int sum = 0;
        int start, end;

        if (x < y) {
            start = x + 1;
            end = y - 1;
        } else {
            start = y + 1;
            end = x - 1;
        }

        for (int i = start; i <= end; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}