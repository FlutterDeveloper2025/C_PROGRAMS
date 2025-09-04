// WAP IN C TO CONVERT DAYS INTO DAY, MONTH AND YEAR //
#include <stdio.h>

int main() {
    int total_days, years, months, days;

    printf("Enter number of days: ");
    scanf("%d", &total_days);

    years = total_days / 365;               // Approximate year as 365 days
    months = (total_days % 365) / 30;      // Approximate month as 30 days
    days = (total_days % 365) % 30;        // Remaining days

    printf("%d days is approximately %d years, %d months, and %d days.\n", total_days, years, months, days);
}

