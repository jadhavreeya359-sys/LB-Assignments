// return the difference between sum of all it factors and non factors
// 12 = -22 (28 - 50)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iSumFact = 0,iSumNonFact = 0, iCnt = 0, iDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }

    }
    return iSumFact - iSumNonFact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference is: %d ",iRet);

    return 0;
}