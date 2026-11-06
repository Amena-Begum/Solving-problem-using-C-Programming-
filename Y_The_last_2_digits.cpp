#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,a1,b1,c1,d1,mult;
    cin>>a>>b>>c>>d;
    a1=a%100;
    b1=b%100;
    c1=c%100;
    d1=d%100;
    mult=a1*b1*c1*d1;
    mult %= 100;
    if(mult < 10){
        cout<<"0"<<mult<<endl;
    }
    else{
        cout<<mult<<endl;
    }
    return 0;
}