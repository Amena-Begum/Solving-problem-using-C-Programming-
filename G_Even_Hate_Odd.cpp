#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n; 
        cin>>n;
        int count_even = 0;
        int count_odd = 0;
        for(int i=0;i<n;i++){
           int num;
            cin>>num;
        
            if(num%2==0){
                 count_even++;
            } else{
                 count_odd++;
            }
        }
        if(n%2 != 0){
           cout<<"-1"<<endl;
        } else{
            cout<<abs(count_even - (n/2))<<endl;//n/2 - count_odd
        }
    }
    return 0;
}