#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iValue)
{
    if(iValue/5)
    {
        printf("Number is divisible by 5\n",iValue);
    }
    else
    {
        printf("Number is not divisible by 5\n",iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}