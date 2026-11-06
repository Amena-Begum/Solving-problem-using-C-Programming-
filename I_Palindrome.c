/* #include<stdio.h>
#include<string.h>
int main(){
    char a[1001],b[1001];
    scanf("%s",&a);
    strcpy(b,a);
    int i = 0, j = strlen(b)-1;
    while(i<j){
        char temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }
    if(strcmp(a,b)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
} */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);

    int i = 0, j = strlen(s) - 1;
    int flag = 1;

    while (i < j) {
        if (s[i] != s[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 0) {
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}