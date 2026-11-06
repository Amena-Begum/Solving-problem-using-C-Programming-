#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int x,y,sum,sub,mult;
    cin>>x>>y;
    sum = x+y;
    sub = x-y;
    mult = x*y;
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mult << endl;
    cout << x << " - " << y << " = " << sub << endl;
   
    return 0;
}