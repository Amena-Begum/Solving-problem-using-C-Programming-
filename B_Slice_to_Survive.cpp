#include<bits/stdc++.h>
using namespace std;
int solve(long long x){
         return ceil(log2(x));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,a,b;
        cin>>n>>m>>a>>b;
        long long x=min(a,n-a+1);
        long long y=min(b,m-b+1);
        long long p = solve(n)+solve(y);
        long long q = solve(m)+solve(x);
        cout<<min(p,q)+1<<endl;
    }
    return 0;
}