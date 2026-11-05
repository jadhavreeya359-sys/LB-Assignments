// accept number from user and print it into word 
#include<stdio.h>

void Number(int ino)
{
    if( (ino < -9) || (ino > 9) )
    {
        printf("invalid number \n");
    }
    else
    {
        if(ino < 0)
        {
            ino = -ino;
        }

        switch(ino)
        {
            case 0:
            printf("zero \n");
            break;
            
            case 1:
            printf("one \n");
            break;
            
            case 2:
            printf("two \n");
            break;

            case 3:
            printf("three \n");
            break;

            case 4:
            printf("four \n");
            break;

            case 5 :
            printf("five \n");
            break;
            
            case 6:
            printf("six \n");
            break;

            case 7:
            printf("seven \n");
            break;

            case 8:
            printf("eight \n");
            break;

            case 9:
            printf("nine \n");
            break ;
            

        }
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