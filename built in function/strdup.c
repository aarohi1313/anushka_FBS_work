#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[] = "Hello";
    char *copy;

    copy = strdup(str);

    printf("%s", copy);

    free(copy);

    return 0;
}