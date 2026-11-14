// display factors in decreasing order
// 10 = 5 2 1

#include<stdio.h>

void FactRev(int iNo)
{
    int iFact = 1, iCnt = 0;

    for(iCnt = iNo - 1; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ",iCnt);
        }

    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}