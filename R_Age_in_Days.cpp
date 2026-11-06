#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int yr=n/365;
    int x=(n%365);
    int mnt=x/30;
    int day=x%30;
    cout<<yr<<" years"<<endl;
    cout<<mnt<<" months"<<endl;
    cout<<day<<" days"<<endl;
    return 0;
}