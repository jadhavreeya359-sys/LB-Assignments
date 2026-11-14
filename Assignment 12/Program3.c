// accept the no from user and count the frequency of 2

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter any number: \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("Count of 2 is: %d",iRet);

    return 0;
}