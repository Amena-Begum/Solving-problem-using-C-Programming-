#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
  for(int i=a.size()-1; i>=0; i--){
    b+=a[i];
  }
  int a1=stoi(a);
  int b1=stoi(b);
  cout<<b1<<endl;
  if(a1==b1){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}