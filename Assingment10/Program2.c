//Q) write a program whiach accept width & height & calculates its area

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{

    float fvalue1 =0.0f, fvalue2 =0.0f;
    double dret = 0.0;

    printf("enter width");
    scanf("%d\n",&fvalue1);

    printf("enter height");
    scanf("%d\n",&fvalue2);

    dret = RectArea(fvalue1,fvalue2);

    return EXIT_SUCCESS;
}