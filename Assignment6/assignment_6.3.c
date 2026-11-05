#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fPayable = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid purchase amount\n");
        return;
    }
    else if (fAmount < 1000)
    {
        fPayable = fAmount;
    }
    else if (fAmount < 5000)
    {
        fPayable = fAmount - (fAmount * 10 / 100);
    }
    else
    {
        fPayable = fAmount - (fAmount * 20 / 100);
    }

    printf("Payable Amount = %.2f\n", fPayable);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}