#include <stdio.h>

int main(void) {
    int i, j;

    printf("(A)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    printf("\n(B)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    printf("\n(C)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= 10 - i; j++) printf(" ");
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    printf("\n(D)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10 - i; j++) printf(" ");
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    return 0;
}