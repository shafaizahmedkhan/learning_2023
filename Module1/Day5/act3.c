#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} TimePeriod;

TimePeriod getTimePeriod() {
    TimePeriod tp;
    printf("Enter hours: ");
    scanf("%d", &tp.hours);
    printf("Enter minutes: ");
    scanf("%d", &tp.minutes);
    printf("Enter seconds: ");
    scanf("%d", &tp.seconds);
    return tp;
}

TimePeriod calculateDifference(TimePeriod tp1, TimePeriod tp2) {
    TimePeriod diff;

    int totalSeconds1 = tp1.hours * 3600 + tp1.minutes * 60 + tp1.seconds;
    int totalSeconds2 = tp2.hours * 3600 + tp2.minutes * 60 + tp2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

int main() {
    TimePeriod tp1, tp2, diff;

    printf("Enter the first time period:\n");
    tp1 = getTimePeriod();

    printf("\nEnter the second time period:\n");
    tp2 = getTimePeriod();

    diff = calculateDifference(tp1, tp2);

    printf("\nDifference between the two time periods: %d hours, %d minutes, %d seconds\n",
           diff.hours, diff.minutes, diff.seconds);

    return 0;
}