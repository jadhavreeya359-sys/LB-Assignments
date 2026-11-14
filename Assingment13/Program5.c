// accept no from user and return difference between sum of even digits and sum of odd digits
// input: 2395 Output: -15 (2 - 17)

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEven = 0, iOdd = 0;

    while(iNo)
    {
        iDigit = iNo % 10;

        if((iDigit %2) == 0)
        {
           iEven = iEven + iDigit;
        }
        else
        {
           iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return iEven - iOdd; // we write this for (2 - 17)

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Sum is: %d",iRet);

    return 0;
}