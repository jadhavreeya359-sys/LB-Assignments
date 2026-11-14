// accept the range from user and return addition of all even numbers in between that range

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if((iStart <= 0) || (iEnd <= 0) || (iStart > iEnd))
    {
        return -1;
    }

    if(iStart % 2 != 0)
    {
        iStart = iStart + 1;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt = iCnt + 2)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: \n");
    scanf("%d",&iValue1);

    printf("Enter ending point: \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);
    printf("Addition of Even numbers is: %d",iRet);

    return 0;
}