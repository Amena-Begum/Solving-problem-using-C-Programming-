#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin>>n;
    if(n>=0 && n<=25.0000){
        cout<<"Interval [0,25]"<<endl;
    }
    if(n>25.00001 && n<=50.0000000){
        cout<<"Interval (25,50]"<<endl;
    }
    if(n>50.00001 && n<=75.0000000){
        cout<<"Interval (50,75]"<<endl;
    }
    if(n>75.00001 && n<=100.0000000){
        cout<<"Interval (75,100]"<<endl;
    }
    if(n<0){
        cout<<"Out of Intervals"<<endl;
    }
    if(n>100.0000001){
        cout<<"Out of Intervals"<<endl;
    }
    
    return 0;
}