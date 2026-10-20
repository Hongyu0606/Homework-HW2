#include <stdio.h>

int main(void) {
    int account;
    float beginning_balance, total_charges, total_credits, credit_limit, new_balance;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);

    while (account != -1) {
        printf("Enter beginning balance: ");
        scanf("%f", &beginning_balance);
        printf("Enter total charges: ");
        scanf("%f", &total_charges);
        printf("Enter total credits: ");
        scanf("%f", &total_credits);
        printf("Enter credit limit: ");
        scanf("%f", &credit_limit);

        new_balance = beginning_balance + total_charges - total_credits;

        if (new_balance > credit_limit) {
            printf("Account:\t%d\n", account);
            printf("Credit limit:\t%.2f\n", credit_limit);
            printf("Balance:\t%.2f\n", new_balance);
            printf("Credit Limit Exceeded.\n");
        }

        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &account);
    }
    return 0;
}