#include <stdio.h>

int main(void) {
    int i, j;

    // 上半部 (含中間最寬那行)
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }

    // 下半部
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= 5 - i; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }

    return 0;
}