/* 
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long min_sum = -1;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long sum = (long long)a[i] + a[j] + (j + 1) - (i + 1);
                if (min_sum == -1 || sum < min_sum) {
                    min_sum = sum;
                }
            }
        }
        cout << min_sum << endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j= i+1; j<n; j++){
                  sum = min(sum, a[i]+a[j]+j-i);
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}