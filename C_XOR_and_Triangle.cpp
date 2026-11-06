#include <bits/stdc++.h>
using namespace std;
bool isTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}
int main() {
    int t;
    cin >> t; 
    while (t--) { 
        int x;
        cin >> x; 

        int found = 0; 

        for (int y = x - 1; y > 0; --y) { 
            int xor_result = x ^ y; 

            if (isTriangle(x, y, xor_result)) { 
                cout << y << endl; 
                found = 1;
                break; 
            }
        }
        if (!found) {
            cout << -1 << endl; 
        }
    }

    return 0;
}