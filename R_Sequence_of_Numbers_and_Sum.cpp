#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m && (n > 0 && m > 0)) { 
        if(m>n){
            int temp=n;
            n=m;
            m=temp;
        }
        int sum=0;
        for(int i=m; i<=n; i++){ 
            cout<<i<<" ";
            sum=sum+i;
        }
        cout<<"sum ="<<sum<<endl;
    }
    return 0;
}