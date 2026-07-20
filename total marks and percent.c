#include <stdio.h>

int main() {
    int m1 = 80, m2 = 75, m3 = 90, m4 = 85, m5 = 70;

    int total = m1 + m2 + m3 + m4 + m5;
    float percentage = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}