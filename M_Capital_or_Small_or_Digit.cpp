#include<bits/stdc++.h>
using namespace std;
int main(){
    char s;
    cin>>s;
    if(s>='0' && s<='9'){
        cout<<"IS DIGIT"<<endl;
    }
    if(s>='A' && s<='Z'){
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    }
    if(s>='a' && s<='z'){
        cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    }
    return 0;
}