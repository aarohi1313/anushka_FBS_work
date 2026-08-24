#include <stdio.h>

int mystrstr(char str[], char sub[]);

int main()
{
    char str[100], sub[100];
    int result;

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    result = mystrstr(str, sub);

    if(result == -1)
        printf("Substring not found");
    else
        printf("Substring found at position %d", result);

    return 0;
}

int mystrstr(char str[], char sub[])
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i+j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
            return i;
    }

    return -1;
}