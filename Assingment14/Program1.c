// display the multiplication of factors // Input: 12 Output: 144

#include<stdio.h>

int MulFact(int iNo)
{
    int iMul = 1, iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;
        }
    }

    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter any number: \n");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);
    printf("Multiplication of factors is: %d\n",iRet);

    return 0;
}