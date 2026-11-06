#include <stdio.h>
#include <stdbool.h>

int main() {
    int yr;
    scanf("%d", &yr);
  while (true) {
        yr++;
        int a = yr / 1000;
        int b = yr / 100 % 10;
        int c = yr / 10 % 10;
        int d = yr % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            printf("%d\n", yr);
            return 0;
        }
    }
    return 0;
}