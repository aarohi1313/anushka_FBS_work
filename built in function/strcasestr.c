#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I Love C Programming";

    printf("%s", strcasestr(str, "c programming"));

    return 0;
}