#include<stdio.h>

void Pattern(int ino)
{
    int icnt =0;

    for(icnt = 1; icnt <= ino; icnt++)
    {
        printf("$\t*\t");
    }

}


int main()
{
    int ivalue = 0;

    printf("enter number \n");
    scanf("%d",&ivalue);

    Pattern(ivalue);
    return 0;
}