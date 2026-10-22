#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iValue)
{
    if((iValue % 3) == 0 && (iValue % 5) == 0)
    {
        printf("%d is divisible by both",iValue);
    }
    else if((iValue % 3) == 0)
    {
        printf("%d is divisible by only 3 ",iValue);
    }
    else if((iValue % 5) == 0)
    {
        printf("%d is dividible by only 5",iValue);
    }
    else
    {
        printf("Not divisible by either ",iValue);
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}