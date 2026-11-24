// input: iRow = 5, iCol = 5
// output:  1  2  3  4  5
        // -1 -2 -3 -4 -5
        //  1  2  3  4  5
        // -1 -2 -3 -4 -5
        //  1  2  3  4  5

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int i = 0, j = 0, iNo = 0, iNo1 = 0;

    for(i = 1; i <= iRows; i++)
    {
        if(i %2 != 0)
        {
            iNo = 1;
        }
        else
        {
            iNo1 = -1;
        }
        for(j = 1; j <= iCol; j++)
        {
            if(i %2 != 0)
            {
                printf("%d\t",iNo);
                iNo++;
            }
            else
            {
                printf("%d\t",iNo1);
                iNo1--;
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue = 0, iValue2 = 0;

    printf("Enter number of rows & columns: \n");
    scanf("%d%d",&iValue,&iValue2);

    Pattern(iValue,iValue2);

    return 0;
}