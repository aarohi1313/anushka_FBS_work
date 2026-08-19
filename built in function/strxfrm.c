#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    char dest[20];

    strxfrm(dest, str, 20);

    printf("%s", dest);

    return 0;
}