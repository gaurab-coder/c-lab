#include <stdio.h>

int main() {
    int num = 10;       // normal integer variable
    int *ptr;           // pointer to int

    ptr = &num;         // store address of num in ptr

    printf("Original value of num: %d\n", num);

    *ptr = 25;          // modify value of num using pointer

    printf("Modified value of num: %d\n", num);

    return 0;
}

