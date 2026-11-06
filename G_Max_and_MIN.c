#include<stdio.h>
#include<limits.h>
void val(int ar[],int n){
    for(int i=0;i<n;i++){
        scanf("%d ",&ar[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX; 
    for(int i=0;i<n;i++){
        if(ar[i]>max){
        max = ar[i];
    }
       if (ar[i] < min) {
            min = ar[i];
        }
    }
    printf("%d %d\n",min, max);
}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
  val(ar,n);
    return 0;
}