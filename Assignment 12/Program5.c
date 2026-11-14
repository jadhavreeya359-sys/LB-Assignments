// accept no from user and count frequency of such a digit which is less than 6

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
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

    iRet = Count(iValue);
    printf("Count of digit less than 6 is: %d \n",iRet);

    return 0;
}