#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t1=0,t2=1;
    if(n==1){
        cout<<t1<<" ";
    }
    else{
        cout<<t1<<" "<<t2<<" ";
    }    
    for(int i=0; i<n-2; i++){
     int nextTerm = t1+t2;
        cout<<nextTerm<<" ";
        t1=t2;
        t2=nextTerm;
    }
    return 0;
}