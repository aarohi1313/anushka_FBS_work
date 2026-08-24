#include <stdio.h>

int mystrncmp(char str1[], char str2[], int n);

int main()
{
    char str1[100], str2[100];
    int n, result;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    result = mystrncmp(str1, str2, n);

    if(result == 0)
        printf("First %d characters are equal", n);
    else
        printf("First %d characters are not equal", n);

    return 0;
}

int mystrncmp(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(str1[i] != str2[i])
            return str1[i] - str2[i];

        if(str1[i] == '\0' || str2[i] == '\0')
            break;
    }

    return 0;
}