#include<bits/stdc++.h>
using namespace std;
int main (){
    double n;
    cin>>n;
    int m = (int)n;
    if(n-m>0){
        cout<<"float "<<m<<" "<<n-m<<endl;
    }
    else {
        cout<<"int "<<m<<endl;
    }
    return 0;
}