#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    long long min = a[0];
    int cont = 0;
    for(int i=0; i<n; i++){
        if(min == a[i]){
            cont++;
        }
        else if(min>a[i]){
            min = a[i];
        cont=1;
        }
    }
    if(cont % 2 != 0){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }
    return 0;
}