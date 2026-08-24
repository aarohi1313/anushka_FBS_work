#include <stdio.h>

int mystrrchr(char str[], char ch);

int main()
{
    char str[100], ch;
    int result;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    result = mystrrchr(str, ch);

    if(result == -1)
        printf("Character not found");
    else
        printf("Last occurrence found at position %d", result);

    return 0;
}

int mystrrchr(char str[], char ch)
{
    int i = 0;
    int position = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            position = i;

        i++;
    }

    return position;
}