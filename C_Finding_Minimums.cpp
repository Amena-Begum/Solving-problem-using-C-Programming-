#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,min=0;
    cin>>n>>k;
    int num,flag=1;
    int counter = 0;
    for(int i=0;i<n;i++){
        cin>>num;
        if(flag){
            min = num;
            flag = 0; 
        }
        else{
            if(num<min){
              min = num;
            }
        }
        counter++;
        if(counter == k || i== n-1){
            cout<<min<<" ";
          counter = 0;
          flag = 1;
        }
        
    }
    return 0;
}