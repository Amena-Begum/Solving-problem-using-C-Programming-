#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n+1][n+1];
        int nDouble = 2*n;
        int secArray[nDouble + 1]={0};
        int sum=0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> arr[i][j];
                secArray[i+j]=arr[i][j];
    }
}
for(int x=0;x<=nDouble; x++){
   sum += secArray[x];
}
cout<<(((nDouble*(nDouble+1))/2)-sum)<<" ";
for(int k=2;k<=nDouble; k++){
    cout<<secArray[k]<<" ";
}
cout<<endl;
    }
    return 0;
}