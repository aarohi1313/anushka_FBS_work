#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello";
    char dest[20];

    memcpy(dest, src, 6);

    printf("%s", dest);

    return 0;
}