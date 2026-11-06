#include <stdio.h>

long long fun(int n, long long ar[]) {
    long long sum = 0; // Corrected: sum should be long long to accommodate large sums
    if (n == 0) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        sum += ar[i];
    }
    printf("%lld\n", sum); 
    return sum; 
}

int main() {
    int n;
    scanf("%d", &n);
    long long ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &ar[i]); 
    }
    fun(n, ar);
    return 0;
}