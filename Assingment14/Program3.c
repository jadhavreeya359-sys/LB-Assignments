// display all its non factor

#include<stdio.h>

void NonFact(int iNo)
{
    int iFact = 1, iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}