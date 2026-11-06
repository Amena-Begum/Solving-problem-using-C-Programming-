#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int checkOne = 0;
    int checkTwo = 0;
    for(int i=0; i<n; i++){ 
         if(i % 2 == 0){
             if(a[i]<0){
                checkOne++;
            } 
        } else{
                if(a[i]>0){
                     checkOne++; 
                    }
            }
            if(i % 2 == 0){
            if(a[i]>0){
                checkTwo++;
            } 
    } else{
                if(a[i]<0){
                     checkTwo++; 
                    }
            }
}
    cout<<min(checkOne,checkTwo)<<endl;
    return 0;
}