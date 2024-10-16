#include<stdio.h>
int main()
{

    double num1, num2, result;
    char respond, op;
    do
    {
        printf("Enter operator: (+, *, -, /)\n");
        scanf(" %c", &op);

        printf("Enter first number: ");
        scanf(" %.2lf", &num1);

        printf("Enter second number: ");
        scanf("%.2lf", &num2);



        if (op == '+')
        {
            if (num1 && num2 > 0){
                printf("Bawal yan boss!");
            }
            else{
            result = num1 + num2;
        }
        }
        else if (op == '-')
        {
            result = num1 - num2;
        }

        else if (op == '/')
        {
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                printf("Invalid! division by zero!\n");
                break;
            }
        }
        else if (op == '*')
        {
            result = num1 * num2;
        }
        else
        {
            printf("Invalid operator!");
        }
        printf("The result is: %.2lf", result);

        printf("\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &respond);
    } while (respond == 'y' || respond == 'Y');
    printf("Thank you!");
    return 0;
}
