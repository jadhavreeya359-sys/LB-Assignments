#include<stdio.h>
#include<stdlib.h>

void display(int ino)
{
    int i = 0;
    
    if(ino<= 0 )
    {
        ino = -ino;
    }
    for (i = 1; i<= ino/2;i++)
    {
        if (ino % i ==0 && i %2 == 0  )
        {
            printf("%d\t",i);
        }
        
    }
}
int main ()
{
    int ivalue = 0;
    printf("enter the number\n");

    scanf("%d",&ivalue);

    display(ivalue);

    return EXIT_SUCCESS;
}