// accept total marks & obtained marks from user and calculate %

#include<stdio.h>

float Percentage(float iNo1, float iNo2)
{
    float fResult = 0.0f;

    if(iNo1 != 0 && iNo2 != 0)
    {
        fResult = (iNo1 / iNo2) * 100;
    }
    if(iNo2 == 0)
    {
        fResult = 0;
    }
    return fResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Enter Obtained marks: \n");
    scanf("%d",&iValue1);

    printf("Enter Total marks: \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is: %.2f",fRet);

    return 0;
}