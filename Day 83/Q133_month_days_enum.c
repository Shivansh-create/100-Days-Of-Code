#include <stdio.h>

enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main(void) {
    int year;
    const char *names[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    scanf("%d", &year);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        days[FEBRUARY] = 29;

    for (enum Month month = JANUARY; month <= DECEMBER; month++)
        printf("%s: %d\n", names[month], days[month]);
    return 0;
}
