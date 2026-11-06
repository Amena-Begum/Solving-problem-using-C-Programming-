#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];   
    }
    int count = 0;
    for(int i=0; i<n; i++){
          int terget = a[i]+1;
        for(int j=0; j<n; j++){
            if(terget == a[j]){
                count++;
                break;
            }
        }
    }
     cout<<count<<endl;
    return 0;
}