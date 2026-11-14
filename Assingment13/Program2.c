// do same as program1 just return count of odd digits

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit %2) != 0)
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

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("Count of odd digit is: %d",iRet);

    return 0;
}