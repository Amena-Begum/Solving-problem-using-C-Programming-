#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
   long long a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int min_value = INT_MAX;
     for(int i=0; i<n; i++){ 
        if(a[i]<0){
          a[i] = a[i]*(-1);
        }
    if(min_value > a[i]){
        min_value = a[i];
    }

}
cout<<min_value<<endl;
    return 0;
}