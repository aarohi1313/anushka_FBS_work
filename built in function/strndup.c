#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[] = "Computer";
    char *copy;

    copy = strndup(str, 4);

    printf("%s", copy);

    free(copy);

    return 0;
}