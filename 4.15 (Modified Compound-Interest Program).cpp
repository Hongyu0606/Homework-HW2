#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 5000.0;
    double rate;
    int year;

    printf("Year\tAmount on deposit (Rate: 10.0%% to 12.0%%)\n");

    for (rate = 0.10; rate <= 0.12; rate += 0.005) {
        printf("\nInterest Rate: %.1f%%\n", rate * 100);
        for (year = 1; year <= 15; year++) {
            double amount = principal * pow(1.0 + rate, year);
            printf("%d\t%.2f\n", year, amount);
        }
    }
    return 0;
}