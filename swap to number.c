#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}