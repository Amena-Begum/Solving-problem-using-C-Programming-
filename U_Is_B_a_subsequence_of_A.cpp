#include<bits/stdc++.h>
using namespace std;
int main(){
    //input:
    int n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
     for(int i=0; i<m; i++){
        cin>>b[i];
    }
    //output:
    int cnt = 0,j=0;
    bool H = false;
    for(int i=0; i<m; i++){
          for(j; j<n; j++){
            if(b[i]==a[j]){
                cnt++;
                H = true;
            break;
            }
          }
           if(H==true){
             j += 1;   
            } else{
                break;
            }
    }
    if(cnt == m){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    return 0;
}