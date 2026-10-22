#include<stdio.h>
#include<stdlib.h>

void CheckCharacter(char cValue)
{

    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase",cValue);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase",cValue);
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit",cValue);
    }
    else
    {
        printf("Special Character",cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c",&cValue);

    CheckCharacter(cValue);

    return EXIT_SUCCESS;
}