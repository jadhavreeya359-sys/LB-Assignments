// input: iRow = 3, iCol = 3
// Output: A B C 
        // A B C 
        // A B C 
          
#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int i = 0, j = 0;
    
    for(i = 1; i<=iRows; i++)
    {
        char ch = 'A';
        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: \n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}