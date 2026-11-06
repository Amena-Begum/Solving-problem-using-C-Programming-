#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,gcd=1;
    cin>>a>>b;
 for(int i=1; i<= min(a,b); i++){ //condition(i<=a && i<=b)
    if(a%i==0 && b%i==0){
        gcd=i;
    }
 }
 cout<<gcd<<endl;
}