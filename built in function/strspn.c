#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "123ABC";

    printf("%lu", strspn(str, "1234567890"));

    return 0;
}