#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";

    printf("%s", strpbrk(str, "aeiou"));

    return 0;
}