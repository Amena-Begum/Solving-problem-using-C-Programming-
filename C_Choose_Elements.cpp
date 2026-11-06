#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,k;
     long long sum =0;
    cin>>n>>k;
   long long a[n];
   for(int i=0; i<n; i++){
    cin>>a[i];
   }
   for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n;j++){
        if(a[i]<a[j]){
            int tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
   }
   for(int i=0; i<k; i++){
     if(a[i]<0){
        break;
     }
     sum+=a[i];
   }
   cout<<sum<<endl;
    return 0;
}