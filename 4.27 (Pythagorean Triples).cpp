#include <stdio.h>

int main(void) {
    int side1, side2, hypotenuse;
    int count = 0;

    printf("Pythagorean triples (side1, side2, hypotenuse) no larger than 500:\n");

    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = side1; side2 <= 500; side2++) {
            for (hypotenuse = side2; hypotenuse <= 500; hypotenuse++) {
                if ((side1 * side1) + (side2 * side2) == (hypotenuse * hypotenuse)) {
                    printf("%d\t%d\t%d\n", side1, side2, hypotenuse);
                    count++;
                }
            }
        }
    }
    printf("\nTotal triples found: %d\n", count);
    return 0;
}