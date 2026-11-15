// accept 1no from user and check weather that no is > 100 or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define False 0

BOOL ChkGreater(int iNo)
{

    if(iNo >= 100)
    {
        printf("%d ",iNo);
    }
    else
    {
        printf("%d ",iNo);
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(iValue >= 100)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}