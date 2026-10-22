#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if((fMarks >= 90) && (fMarks <= 100))
    {
        printf("Grade A \n",fMarks);
    }
    else if((fMarks >= 75) && (fMarks <= 89))
    {
        printf("Grade B\n",fMarks);
    }
    else if((fMarks >= 60) && (fMarks <= 74))
    {
        printf("Grade C\n",fMarks);
    }
    else if((fMarks >= 40) && (fMarks <= 59))
    {
        printf("Grade D \n",fMarks);
    }
    else if(fMarks <= 40)
    {
        printf("Fail \n",fMarks);
    }
    else
    {
        printf("Invalid marks \n",fMarks);
    }
}

int main()
{
    float Marks = 0.0f;

    printf("Enter a number: \n");
    scanf("%f",&Marks);

    DisplayGrade(Marks);

    return EXIT_SUCCESS;
}