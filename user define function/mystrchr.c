#include <stdio.h>

int mystrchr(char str[], char ch);

int main()
{
    char str[100], ch;
    int result;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    result = mystrchr(str, ch);

    if(result == -1)
        printf("Character not found");
    else
        printf("Character found at position %d", result);

    return 0;
}

int mystrchr(char str[], char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            return i;

        i++;
    }

    return -1;
}