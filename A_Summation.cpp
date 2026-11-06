#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n;
     cin>>n;
     int a[n];
     for(int i=0; i<n; i++){
        cin>>a[i];
     }
    long long int sum=0;
     for(int i=0;i<n; i++){
      sum += a[i];
      
      }
      if(sum<0)
      {
         cout<<(-1)*sum;
     }
     else {
        cout<< sum;
     }
     return 0;
     }
