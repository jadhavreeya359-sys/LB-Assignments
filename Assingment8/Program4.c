//Q Write a program which accept number from user and display its table
#include<stdio.h>

void DisplayTable(int ino)
{
    int icnt =0;

    for(icnt =1; icnt <= 10 ; icnt++)
    {
        printf("%d\n", ino * icnt);
    }
}

int main()
{
    int ivalue =0;

    printf("enter number \n");
    scanf("%d",&ivalue);

    DisplayTable(ivalue);

    return 0;
}