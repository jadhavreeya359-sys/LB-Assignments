#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue >= 1)
    {
        printf("Number is positive\n",iValue);
    }
    else if(iValue <= -1)
    {
        printf("Number is negative \n",iValue);
    }
    else
    {
        printf("Number is zero\n",iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}