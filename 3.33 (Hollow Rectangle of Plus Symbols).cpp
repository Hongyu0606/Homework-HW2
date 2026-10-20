#include <stdio.h>

int main(void) {
    int length, breadth, i, j;

    printf("Enter length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);

    for (i = 1; i <= length; i++) {
        for (j = 1; j <= breadth; j++) {
            if (i == 1 || i == length || j == 1 || j == breadth) {
                printf("+");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}