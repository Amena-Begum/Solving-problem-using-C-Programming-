#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n][n];
    //matrix input :
 for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cin>>A[i][j];
    }
 }
   //matrix output :
   int C[n][n]; 
 
 for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        int Cof[2][2];
     Cof[i][j]=pow((-1),i+j);
     
     if((i+j)%2 == 0){

     }
    }
 }
 
    return 0;
}