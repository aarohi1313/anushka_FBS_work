#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello123";

    printf("%lu", strcspn(str, "0123456789"));

    return 0;
}