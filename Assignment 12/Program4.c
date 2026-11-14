// accept no from user and count the number of frequency of 4 in it

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
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

    iRet = CountFour(iValue);
    printf("Count of 4 is: %d",iRet);

    return 0;
}