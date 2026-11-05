#include<stdio.h>

int Display(int iNo, int iFrequency)
{
    int i = 0;
    for(i = 1; i <= iFrequency; i++)
    {
        printf("%d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d",&iCount);

    printf("Enter frequency: \n");
    scanf("%d",&iValue);

    Display(iCount,iValue);

    return 0;
}