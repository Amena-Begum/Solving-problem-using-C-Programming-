#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,count,sum;
    cin>>n;
    int i=1;
 while(i<=n){
    cin>>x;
    count = 0;
   while(x>0){
       count += x%2;
       x /= 2;
   }
   sum = pow(2,count) - 1;
   cout<<sum<<endl;
   i++;
 }
    return 0;
}