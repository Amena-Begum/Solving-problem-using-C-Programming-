#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,column;
     cin>>row>>column;
     char arr[101][101];
     for(int i=1;i<=row;i++){
        for(int j= 1; j<=column; j++){
            cin>>arr[i][j];
        }
     }
     int rowIn,columnIn;
     cin>>rowIn>>columnIn;
     if(arr[rowIn][columnIn-1] != '.' && arr[rowIn][columnIn+1] != '.' &&
    arr[rowIn-1][columnIn] != '.' && arr[rowIn+1][columnIn] != '.' &&
     arr[rowIn-1][columnIn-1] != '.' && arr[rowIn-1][columnIn+1] != '.' &&
      arr[rowIn+1][columnIn-1] != '.' && arr[rowIn+1][columnIn+1] != '.'){
        cout<<"yes"<<endl;
      } else{
        cout<<"no"<<endl;
      }
    return 0;
}