// input: iRow = 5, iCol = 5
// output: a b c d e
        // 1 2 3 4 5
        // a b c d e
        // 1 2 3 4 5
        //a b c d e

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int i = 0, j = 0, iNo = 0;
    char ch = '\0';

    for(i = 1; i <= iRows; i++)
    {
        if(i %2 != 0)
        {
            ch = 'a';
        }
        else
        {
            iNo = 1;
        }
        
        for(j = 1; j<= iCol; j++)
        {
            if(i %2 != 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",iNo);
                iNo++;
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows & column: \n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}