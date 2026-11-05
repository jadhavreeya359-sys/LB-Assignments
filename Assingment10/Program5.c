//Q) write a program whiach accept area in square feet and convert it into square meter

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.092903;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %lf\n", dRet);

    return 0;
}