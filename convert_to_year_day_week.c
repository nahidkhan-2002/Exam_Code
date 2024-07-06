#include <stdio.h>

int main() {
    int totalDays;
    printf("Enter the total number of days: ");
    scanf("%d", &totalDays);
    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int months = remainingDays / 30;
    int weeks = (remainingDays % 30) / 7;
    printf("Equivalent:\n");
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);

    return 0;
}
