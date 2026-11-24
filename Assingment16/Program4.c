// intput: iRows = 4, iCol = 5
// Output: 4 4 4 4 4
        // 3 3 3 3 3 
        // 2 2 2 2 2
        // 1 1 1 1 1

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int i = 0, j = 0;
    int no = iRows;
    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
            printf("%d\t",no);
        }
        no--;
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows & Columns: \n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}