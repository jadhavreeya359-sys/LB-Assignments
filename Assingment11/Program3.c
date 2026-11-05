//Q) Write a prograam which accept range from user and return addition of all numbers in bwtween that range

#include<stdio.h>
#include<stdlib.h>

int SumRange(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart <= 0) || (iEnd <= 0) || (iStart > iEnd))
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting and ending point: ");
    scanf("%d %d", &iValue1, &iValue2);

    iRet = SumRange(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is: %d\n", iRet);
    }

    return 0;
}