// input: iRow = 4, iCol = 4
/* output: 
         * * * *
         * * * #
         * * # #
         * # # #
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
            if(j <= iCol - i + 1)  // without +1 it wont print 4 * in 1st row thats why with +1 we can get the pattern
            {//ex:     4 - 1 + 1 = 4  thats why +1 with iCol used
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows & Column: \n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}