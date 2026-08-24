#include <stdio.h>

int mystrncasecmp(char str1[], char str2[], int n);

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

    result = mystrncasecmp(str1, str2, n);

    if(result == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;
    char ch1, ch2;

    for(i = 0; i < n; i++)
    {
        ch1 = str1[i];
        ch2 = str2[i];

        if(ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;

        if(ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;

        if(ch1 != ch2)
            return ch1 - ch2;

        if(str1[i] == '\0' || str2[i] == '\0')
            break;
    }

    return 0;
}