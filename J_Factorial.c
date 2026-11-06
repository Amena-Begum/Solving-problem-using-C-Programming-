#include<stdio.h>

long long int fact(long long int i){
    //Base case
     if(i==0){
        return 1;
     }
    long long int ans = fact(i-1);
     return ans*i;
}
int main(){
     long long int n;
     scanf("%lld",&n);
     long long int ans = fact(n);
      printf("%lld\n",ans);
    return 0;
}