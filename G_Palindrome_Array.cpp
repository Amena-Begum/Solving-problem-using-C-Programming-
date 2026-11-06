#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag=0;
    cin>>n;
  int ar[n];

    for(int i=0;i<n; i++){
        cin>>ar[i];
    }
   for(int i=0; i<n/2; i++){
       if(ar[i] != ar[n-1-i]){
        flag = 1;
        break;
       }
   }
   if(flag==0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}