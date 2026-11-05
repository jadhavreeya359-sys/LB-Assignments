//Q write a program which accept number from user and print first 5 multiples of N
//input : 4
//output: 4     8     12    16   20

#include<stdio.h>

void MultipleDisplay(int ino)
{
    int icnt =0;

    for(icnt = 1; icnt <= 5; icnt++)
    {
        if((icnt % 2)!=0)
        {
            printf("%d\t", ino * icnt);
        }
    }

}


int main()
{
    int ivalue = 0;

    printf("enter number \n");
    scanf("%d",&ivalue);

    MultipleDisplay(ivalue);
    
    return 0;
}