/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,x,r,t=0,sum=0;
    cin>>n>>a>>b;
    for(int i=1; i<=n; i++){
          sum=0;
          x=i;
          while(x>0){
            r= x%10;
            sum +=r;
            x /= 10;
          }
          if(sum>=a && sum<= b){
            t += i;
          }
    }
    cout<<t;
    return 0;
}
    */
   #include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, x, r, sum = 0, total_sum = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        sum = 0;
        x = i;
        while (x > 0) {
            r = x % 10;
            sum += r;
            x /= 10;
        }
        if (sum >= a && sum <= b) {
            total_sum += i;
        }
    }
    cout << total_sum << endl;
    return 0;
}