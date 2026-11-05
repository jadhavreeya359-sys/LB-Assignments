//Q write a program which accept number from user and print  number till that number
#include<stdio.h>

void Display(int ino)
{
    int icnt =0;

    for(icnt = 1; icnt <= ino; icnt++)
    {
        printf("%d\n",icnt);
    }

}


int main()
{
    int ivalue = 0;

    printf("enter number \n");
    scanf("%d",&ivalue);

    Display(ivalue);
    return 0;
}