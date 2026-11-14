//accept number from user and return multiplication of all digits

#include<stdio.h>

int MulDigit(int iNo)
{
    int iDigit = 0, iMul = 1;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 0)
        {
            iMul = iDigit * iMul;
        }
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter any number: \n");
    scanf("%d",&iValue);

    iRet = MulDigit(iValue);
    printf("Multiplication of digits is: %d",iRet);

    return 0;
}