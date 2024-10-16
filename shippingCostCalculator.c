#include <stdio.h>

int main()
{
    // variable declaration
    double packageWeight = 0;
    double shippingCost = 0;
    int shippingMethod;
    char loopAns;

    // do while loop
    do
    {
        printf("Welcome to shipping cost calculator!\n");
        printf("1. Standard Shipping\n");
        printf("2. Express Shipping\n");
        printf("3. Overnight Shipping\n");

        printf("Select a shipping method: (1-3): \n");
        scanf("%d", &shippingMethod);

        printf("Enter a weight of package: (in kg)\n");
        scanf("%lf", &packageWeight);
        

        // nested switch case
        switch (shippingMethod)
        {
        case 1:
        {
            if (packageWeight <= 5)
            {
                shippingCost = packageWeight * 10;
                printf("Shipping method: Standard Shipping\n");
                printf("Weight: %.2lf\n", packageWeight);
                printf("Cost: $%.2lf", shippingCost);
            }
            else if (packageWeight >= 6)
            {
                printf("Shipping method: Standard Shipping\n");
                shippingCost = packageWeight * 12;
                printf("Weight: %.2lf\n", packageWeight);
                printf("Cost: $%.2lf", shippingCost);
            }
            else if (packageWeight >= 10)
            {
                printf("Shipping method: Standard Shipping\n");
                shippingCost = packageWeight * 15;
                printf("Weight: %.2lf\n", packageWeight);
                printf("Cost: $%.2lf", shippingCost);
            }
            // if packageWeight greater than 10
            else
            {
                printf("Shipping method: Standard Shipping\n");
                shippingCost = packageWeight * 20;
                printf("Weight: %.2lf\n", packageWeight);
                printf("Cost: $%.2lf", shippingCost);
            }
            break;
        }

        case 2:
        {
            if (packageWeight <= 5)
            {
                if (packageWeight != 0)
                {
                    printf("Shipping method: Express Shipping\n");
                    shippingCost = packageWeight * 12;
                    printf("Weight: %.2lf\n", packageWeight);
                    printf("Cost: $%.2lf\n", shippingCost);
                }
                else
                {
                    printf("Invalid!\n");
                }
            }
            else if (packageWeight >= 6)
            {
                if (packageWeight != 0)
                {
                    printf("Shipping method: Express Shipping\n");
                    shippingCost = packageWeight * 14;
                    printf("Weight: %.2lf\n", packageWeight);
                    printf("Cost: $%.2lf\n", shippingCost);
                }
                else
                {
                    printf("Invalid!");
                }
            }
            else if (packageWeight >= 10)
            {
                if (packageWeight != 0)
                {
                    printf("Shipping method: Express Shipping\n");
                    shippingCost = packageWeight * 17;
                    printf("Weight: %.2lf\n", packageWeight);
                    printf("Cost: $%.2lf\n", shippingCost);
                }
                else
                {
                    printf("Invalid!\n");
                }
            }

            // if packageWeight greater than 10
            else
            {
                printf("Shipping method: Express Shipping\n");
                shippingCost = packageWeight * 22;
                printf("Weight: %.2lf\n", packageWeight);
                printf("Cost: $%.2lf\n", shippingCost);
            }
            break;
        }

        case 3:
        {
            if (packageWeight <= 5)
            {
                if (packageWeight != 0)
                {
                    printf("Shipping method: Overnight Shipping\n");
                    shippingCost = packageWeight * 15;
                    printf("Weight: %.2lf\n", packageWeight);
                    printf("Cost: $%.2lf\n", shippingCost);
                }
                else
                {
                    printf("Invalid!");
                }
            }
            else if (packageWeight >= 6)
            {
                if (packageWeight != 0)
                {
                    printf("Shipping method: Express Shipping\n");
                    shippingCost = packageWeight * 17;
                    printf("Weight: %.2lf\n", packageWeight);
                    printf("Cost: $%.2lf\n", shippingCost);
                }
                else
                {
                    printf("Invalid!\n");
                }
            }
            else if (packageWeight >= 10)
            {
                if (packageWeight != 0)
                {
                    printf("Shipping method: Express Shipping\n");
                    shippingCost = packageWeight * 20;
                    printf("Weight: %.2lf\n", packageWeight);
                    printf("Cost: $%.2lf\n", shippingCost);
                }
                else
                {
                    printf("Invalid!\n");
                }
            }
            // if packageWeight is greater than 10
            else
            {
                printf("Shipping method: Express Shipping\n");
                shippingCost = packageWeight * 25;
                printf("Weight: %.2lf\n", packageWeight);
                printf("Cost: $%.2lf\n", shippingCost);
            }
            break;
        }
        default:
        {
            printf("Invalid! please choose (1-3) only.\n");
        }
        }
        printf("Do you want to calculate again? (y/n)");
        scanf(" %c", &loopAns);
    } while (loopAns == 'y' || loopAns == 'Y');
    printf("Thank you for using the Shipping Cost Calculator!");
    return 0;
}