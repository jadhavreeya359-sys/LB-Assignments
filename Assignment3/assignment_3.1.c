#include<stdio.h>
#include<stdlib.h>

void even(int ino)
{
    int icnt = 0;
    int ans  = 0;
    if(ino<= 0 )
    {
        return;
    }
    for (icnt = 1; icnt<= ino;icnt++)
    {
        ans  = icnt *2;
        printf("%d\t",ans);
    }
}
int main ()
{
    int ivalue = 0;
    printf("enter the number\n");

    scanf("%d",&ivalue);

    even(ivalue);

    return EXIT_SUCCESS;
}