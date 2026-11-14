// accept number from user and return count of digit of in between 3 & 7

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit >= 3) && (iDigit <= 7))
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

    iRet = CountRange(iValue);
    printf("Count of digit between 3 & 7 is: %d \n",iRet);

    return 0;
}