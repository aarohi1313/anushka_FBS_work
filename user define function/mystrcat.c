#include <stdio.h>

void mystrcat(char str1[], char str2[]);

int main()
{
    char str1[200], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    mystrcat(str1, str2);

    printf("Concatenated string = %s", str1);

    return 0;
}

void mystrcat(char str1[], char str2[])
{
    int i = 0, j = 0;

    while(str1[i] != '\0')
    {
        i++;
    }

    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}