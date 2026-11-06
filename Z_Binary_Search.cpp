#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,q;
    cin>>n>>q;
   long long a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a,a+n);
   while(q--){
    long long x;
    cin>>x;
    bool flag = false;
   int l=0,r=n-1;
   // binary seach
   while(l<=r){
        int mid_index=(l+r)/2;
        if(a[mid_index]==x){
            flag=true;
            break;
        }
        if(x>a[mid_index]){
            l=mid_index+1;
        }
        else{
            r=mid_index-1;
        }
   }
    // for(int i=0;  i<n; i++){
    //     if(a[i]==x){
    //         flag=true;
    //         break;
    //     }
    // }
    if(flag==true){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
   }
    return 0;
}