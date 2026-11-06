#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l,w,h;
    for(int i=0;i<n;i++){
       int mult;
        cin>>l>>w>>h;
        mult = l*w*h;
        if(h<41){
            cout<<mult<<endl;
        }
    }
   
    return 0;
}