#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 4 == 0) && (iYear % 100 != 0))
    {
        printf("%d is a leap year",iYear);
    }
    else
    {
        printf("%d is not a leap year",iYear);
    }
}

int main()
{
    int iYear = 0;

    printf("Enter a year: \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}