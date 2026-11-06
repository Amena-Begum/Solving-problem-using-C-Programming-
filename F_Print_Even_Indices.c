#include <stdio.h>

void fun(int n, int a[]) {
    if (n <= 0) 
        return;

    for (int i = n - 1; i >= 0; i--) {
        if(i%2==0)
       {
         printf("%d ", a[i]);
        } 
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    fun(n, a);
    return 0;
}