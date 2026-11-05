//write a program to given its odd factorials
/*
input: 10
output: 1*3*5*7*9

*/

#include<stdio.h>
#include<stdlib.h>

int DisplayOddFactorial(int ino)
{

    int icnt =0 ;

    for(icnt =1; icnt <= ino; icnt ++)
    {
        if((ino % icnt ==0) && (ino %2 == 0))
        {
            printf("%d \t",icnt);
        }
    }
}


int main()
{
    int ivalue =0, iret =0;

    printf("enter number \n");
    scanf("%d",&ivalue);

    iret = DisplayOddFactors(ivalue);

    printf("Odd factorial  number is:  %d \n");

    return 0;
}