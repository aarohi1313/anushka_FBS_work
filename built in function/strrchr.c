#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";

    printf("%s", strrchr(str, 'l'));

    return 0;
}