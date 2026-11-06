#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,flag;
    cin>>a>>b;
    int check=1;
   for(int i=a; i<=b; i++){
       flag=1;
       int tmp=i;
       while(tmp>0){
        int r=tmp%10;
        if(r != 4 && r != 7){
            flag=0; 
            break;
        }
        tmp/=10;
       }
       if(flag==1){
        check=0;
        cout<<i<<" ";
       }

   }
   if(check==1){
    cout<<"-1"<<endl;
   }
//    else{
//     cout<<check<<endl;
//    }
   return 0;
}