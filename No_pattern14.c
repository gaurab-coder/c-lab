#include <stdio.h>

int main() {
    int i, j;
    int rows = 4;

    for(i = 2; i <= rows + 1; i++) {
        for(j = 1; j <= i; j++) {
            if(j % 2 != 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
