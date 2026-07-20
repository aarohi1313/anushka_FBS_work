#include <stdio.h>

int main() {
    int minutes = 130;
    int hours = minutes / 60;
    int remMinutes = minutes % 60;

    printf("Total Minutes = %d\n", minutes);
    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d\n", remMinutes);

    return 0;
}