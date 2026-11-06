#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    string rev_s=s;
    reverse(rev_s.begin(),rev_s.end());
    int diff_count =0;
    for(int i=0; i<n/2; i++){
        if(s[i]!=rev_s[i]){
            diff_count++;
        }
    }
    if(diff_count<=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}