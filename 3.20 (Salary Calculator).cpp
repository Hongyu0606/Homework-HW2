#include <stdio.h>

int main(void) {
    int hours;
    float rate, salary;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);

    while (hours != -1) {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate);

        if (hours <= 40) {
            salary = hours * rate;
        } else {
            salary = (40 * rate) + ((hours - 40) * rate * 1.5);
        }

        printf("Salary is $%.2f\n\n", salary);

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);
    }
    return 0;
}