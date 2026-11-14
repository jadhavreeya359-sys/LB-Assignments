// accept no from user and check if their is 0 or not and if yes then how many

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return TRUE;

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    bRet= ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}