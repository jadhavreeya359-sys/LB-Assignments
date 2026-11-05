#include<stdio.h>

void Number(int ino)
{
    if(ino < 50)
    {
        printf("small\n");
    }
    else if((ino > 50) && (ino < 100))
    {
        printf("medium\n");
    }
    else if(ino > 100)
    {
        printf("large\n");
    }
    else
    {
        printf("Number is 50 or 100\n");
    }
}  


int main()
{
    int ivalue =0;

    printf("enter number \n");
    scanf("%d",&ivalue);

    Number(ivalue);

    return 0;
}