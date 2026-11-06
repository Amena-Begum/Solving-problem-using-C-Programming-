#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    if (n % 2 != 0 && n >= 3 && n <= 49) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j&& i != n/2 && j != n/2) {
                    cout << "\\";
                }
                 else if (j != n/2 && i ==((n-1)-j)) {
                    cout << "/";
                }
                else if (i== n/2 && j==n/2){
                    cout << "X";
                }
            
                else {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
    return 0;
}