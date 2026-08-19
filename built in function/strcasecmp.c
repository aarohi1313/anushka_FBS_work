#include <stdio.h>
#include <strings.h>

int main()
{
    char str1[] = "HELLO";
    char str2[] = "hello";

    if(strcasecmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are different");

    return 0;
}