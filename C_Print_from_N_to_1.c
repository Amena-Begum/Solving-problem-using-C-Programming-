#include <stdio.h>
void fun(int x, int n)
{
    if (x > n) 
        return;
    fun(x + 1, n);
    if (x != n + 1) { 
        printf("%d", x);
        if (x != 1) {  // Only print space if x is not 1
            printf(" ");
        }
    } 
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(1, n);
    return 0;
}