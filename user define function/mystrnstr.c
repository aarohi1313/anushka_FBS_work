#include <stdio.h>

int mystrnstr(char str[], char sub[], int n);

int main()
{
    char str[100], sub[100];
    int n, result;

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    result = mystrnstr(str, sub, n);

    if(result == -1)
        printf("Substring not found");
    else
        printf("Substring found at position %d", result);

    return 0;
}

int mystrnstr(char str[], char sub[], int n)
{
    int i, j;

    for(i = 0; str[i] != '\0' && i < n; i++)
    {
        j = 0;

        while(sub[j] != '\0' &&
              str[i+j] == sub[j] &&
              i+j < n)
        {
            j++;
        }

        if(sub[j] == '\0')
            return i;
    }

    return -1;
}