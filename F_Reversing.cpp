#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a ;
      v.push_back(a);
    }
    reverse(v.begin(), v.end());
    // v = vector<int>(v.rbegin(), v.rend());
    for (auto i : v)
    cout << i << " ";
    cout << endl;

return 0;
}