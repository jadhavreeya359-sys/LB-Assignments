// return sum of all its non factors

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iCnt + iSum;

        }
    }
    return iSum;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter any number: \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Sum of non factors is: %d \n",iRet);

    return 0;
}