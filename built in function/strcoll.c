#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Apple";
    char str2[] = "Banana";

    if (strcoll(str1, str2) < 0)
        printf("Apple comes before Banana");
    else
        printf("Apple comes after Banana");

    return 0;
}