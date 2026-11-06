 #include<stdio.h>
void ass(int ar[], int m){
    int at[]= {ar[0],ar[1],ar[2]};
    for(int i=0; i<m-1;i++){
        for(int j=0; j<m-i-1;j++){
            if(ar[j]>ar[j+1]){
                int swap= ar[j];
                  ar[j]=ar[j+1];
                  ar[j+1]=swap;
                }
        }
    }
    for(int i=0;i<m;i++){
        printf("%d\n",ar[i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++) {
        printf("%d\n", at[i]);
    }
}
int main(){
    int n=3;
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    ass(ar,n);
    
    return 0;
} 
/*

#include <stdio.h>

void sortAndPrint(int a, int b, int c) {
    int arr[3] = {a, b, c};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d\n%d\n%d\n\n", arr[0], arr[1], arr[2]);

    printf("%d\n%d\n%d\n", a, b, c);
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    sortAndPrint(a, b, c);

    return 0;
}
*/