#include<stdio.h>
void rec(int x){
    if(x==0) return;
     printf("I love Recursion\n");
     rec(x-1);
}
int main(){
    int N;
    scanf("%d",&N);
    rec(N);
    return 0;
}