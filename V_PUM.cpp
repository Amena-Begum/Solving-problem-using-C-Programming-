#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= 4 * n) {
        if (i % 4 == 0) {
            cout << "PUM" << endl;
        } else {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}