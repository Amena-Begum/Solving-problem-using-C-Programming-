 #include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        if (m >= abs(l)) {
            cout << l << " " << m - abs(l) << endl;
        } else {
            cout << -m << " " << 0 << endl;
        }
    }

    return 0;
}
/*
   #include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
   cin>>t;
    while(t--){
       int n,m,l,r;
       cin>>n>>m>>l>>r;
       if(n-m<=abs(l)){
        cout<<l+(n-m)<<" "<<r<<endl;
       }
       else{
        cout<<0<<" "<<r-l-(n-m)<<endl;
       }
    }
    return 0;
}*/