// accept name from user and print that name

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Enter your name: \n");
    fgets(Name, sizeof(Name), stdin);

    printf("Your name is: %s",Name);

    return 0;
}