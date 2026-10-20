#include <stdio.h>

int main(void) {
    float sales, salary;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);

    while (sales != -1) {
        salary = 200.0 + (sales * 0.09);
        printf("Salary is: $%.2f\n\n", salary);

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }
    return 0;
}