//Q Write a program which accept number from user and display below pattern
/*
input : 5
output: *   *   *   *   *   $   $   $   $   $
*/

#include<stdio.h>

void Display(int ino)
{
    int icnt =0;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(icnt =1 ;icnt <= ino; icnt++)
    {
        printf("*\t");
    }

    for(icnt =1; icnt <= ino; icnt++)
    {
        printf("$\t");
    }
}

int main()
{
    int ivalue =0;

    printf("enter number \n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}