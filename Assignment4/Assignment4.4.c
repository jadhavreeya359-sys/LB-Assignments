#include<stdio.h>
#include<stdlib.h>

void CheckVoting(int iAge)
{
    if(iAge > 0)
    {
        if(iAge >= 18)
        {
            printf("Eligible for Voting\n");
        }
        else
        {
            printf("Not eligible for voting\n");
        }
    }
    else
    {
          printf("Invalid age\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: \n");
    scanf("%d",&iAge);

    CheckVoting(iAge);

    return EXIT_SUCCESS;
}