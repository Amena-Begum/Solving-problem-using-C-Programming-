#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> target = {0, 1, 0, 3, 2, 0, 2, 5};
        int ans = 0;

        for (int i = 8; i <= n; ++i) {
            vector<int> current(a.begin(), a.begin() + i);
            vector<int> temp = current;

            vector<int> target_temp = target;

            if (temp.size() >= target_temp.size()) {
                vector<int> temp2 = temp;
                for(int j = 0; j<target.size(); j++){
                    auto it = find(temp2.begin(), temp2.end(), target[j]);
                    if(it != temp2.end()){
                        temp2.erase(it);
                    } else{
                        break;
                    }
                    if(j == target.size() -1){
                        ans = i;
                        break;
                    }
                }
            }
            if(ans != 0){
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}