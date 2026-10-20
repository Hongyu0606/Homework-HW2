#include <stdio.h>

int main(void) {
    int paycode;
    double salary, hourly_wage, hours_worked, gross_sales, pieces_produced, wage_per_piece;

    printf("Enter paycode (-1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1) {
        switch (paycode) {
            case 1: // Manager
                printf("Enter weekly salary for manager: ");
                scanf("%lf", &salary);
                printf("Manager's pay is: $%.2f\n", salary);
                break;
            case 2: // Hourly worker
                printf("Enter hourly wage: ");
                scanf("%lf", &hourly_wage);
                printf("Enter hours worked: ");
                scanf("%lf", &hours_worked);
                if (hours_worked <= 40) {
                    salary = hours_worked * hourly_wage;
                } else {
                    salary = (40 * hourly_wage) + ((hours_worked - 40) * hourly_wage * 1.5);
                }
                printf("Hourly worker's pay is: $%.2f\n", salary);
                break;
            case 3: // Commission worker
                printf("Enter gross weekly sales: ");
                scanf("%lf", &gross_sales);
                salary = 250.0 + (0.057 * gross_sales);
                printf("Commission worker's pay is: $%.2f\n", salary);
                break;
            case 4: // Pieceworker
                printf("Enter number of pieces produced: ");
                scanf("%lf", &pieces_produced);
                printf("Enter wage per piece: ");
                scanf("%lf", &wage_per_piece);
                salary = pieces_produced * wage_per_piece;
                printf("Pieceworker's pay is: $%.2f\n", salary);
                break;
            default:
                printf("Invalid pay code.\n");
                break;
        }
        printf("\nEnter paycode (-1 to end): ");
        scanf("%d", &paycode);
    }
    return 0;
}