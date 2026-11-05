//Q write a program to find a even factorial of given number 
#include<stdio.h>
#include<stdlib.h>

int Factorial(int ino)
{
    int icnt = 0;
    int iFact = 1;

    for(icnt = 1; icnt <= ino; icnt++)
    {
        iFact = iFact * icnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %d\n",iRet);

    return 0;
}