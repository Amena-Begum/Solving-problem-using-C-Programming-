#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,sum=0;
    cin>>t;
    while(t--){
      long long l,r,mx,mn;
  cin>>l>>r;
    mx = max(l,r);
    mn = min(l,r);
    mn--;
 long long rst1= mn*(mn+1)/2;   
 long long rst2= mx*(mx+1)/2;  
 cout<<rst2-rst1<<endl;
    }
    return 0;
}