#include <stdio.h>

void mystrncat(char str1[], char str2[], int n);

int main()
{
    char str1[200], str2[100];
    int n;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    mystrncat(str1, str2, n);

    printf("Result = %s", str1);

    return 0;
}

void mystrncat(char str1[], char str2[], int n)
{
    int i = 0, j = 0;

    while(str1[i] != '\0')
    {
        i++;
    }

    while(str2[j] != '\0' && j < n)
    {
        str1[i] = str2[j];

        i++;
        j++;
    }

    str1[i] = '\0';
}