#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ar[n];
        for(int i=0; i<n;i++){
            cin>>ar[i];
        }
        vector<int>result;
        for(int start = 0; start<n; start++){
            for(int end=start; end<n; end++){
                long long max=INT_MIN;
                 for( int k=start; k<=end; k++){
                    if(ar[k]>max){
                        max=ar[k];
                    }
                 }
                 result.push_back(max);
            }
        }
        for(int i=0; i<result.size(); i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}