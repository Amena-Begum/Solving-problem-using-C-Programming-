#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, z, mn;
    cin >> x >> y >> z;
    mn = min({x, y, z});
    x -= mn;
    z -= mn; 
    cout << min(z, x / 2) + mn << endl;

    return 0;
}