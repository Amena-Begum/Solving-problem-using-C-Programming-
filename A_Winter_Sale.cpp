#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,p;
    double original;
    cin>>x>>p;
    original = (100.0*p)/(100.0-x);
    cout<< fixed << setprecision(2)<< original<<endl;
    return 0;
}