#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Computer";
    char str2[] = "Compare";

    if (strncmp(str1, str2, 3) == 0)
        printf("First 3 characters are same");
    else
        printf("Different");

    return 0;
}