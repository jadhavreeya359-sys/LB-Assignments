//Q Write a program to find factorial of given number 
#include<stdio.h>

int Factorial(int ino)
{
    int icnt = 0;
    int ifact =0;

    for(icnt =1,ifact =1; icnt <= ino; icnt++)
    {
        ifact = icnt * ifact;
    }

    return ifact;
}

int main()
{
    int ivalue =0;
    int iret =0;

    printf("enter number \n");
    scanf("%d",&ivalue);

    iret = Factorial(ivalue);

    printf("factorial of number is %d",iret);

    return 0;
}