#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long x;
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        int count = 0;
        long long temp = x;

        while (temp % 2 == 0) {
            count++;
            temp /= 2;
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    cout << maxCount << endl;
    return 0;
}
