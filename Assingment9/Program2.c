//Q accept amount in us doller and return its corresponding value in indian currency consider 1$ as 70rs
#include<stdio.h>
#include<stdlib.h>

int DollerToINR(int ino)
{
    int iResult =0;

    ino = ino * 70;

    return iResult;
}

int main()
{
    int ivalue =0, iret =0;

    printf("enter number \n");
    scanf("%d",&ivalue);

    iret = DollerToINR(ivalue);

    printf("value in INR is  %d \n");

    return 0;
}