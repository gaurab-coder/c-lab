#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "UNIVERSITY";
    int i, j;
    int len = strlen(str);

    for(i = 0; i < len; i++) {
        for(j = 0; j <= i; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}
