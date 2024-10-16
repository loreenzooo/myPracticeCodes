#include <stdio.h>
#include <math.h>
void highest(void)
{
    int num1, num2;

    printf("Lets get the highest number!\n");

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("The lowest number is: ");
    printf("%.2lf", fmax(num1, num2));
}
void lowest(void)
{
    int num1, num2;

    printf("Lets get the lowest number!\n");

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("The lowest number is: ");
    printf("%.2lf", fmin(num1, num2));
}

int main()
{
    
    int choice;
    

    printf("1. Get the lowest input number of 2 integers\n2. Get the highest input number of 2 integers.\n");
    printf("Enter method you want to try: (1 || 2)\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        
        lowest();
        
    }
    else if (choice == 2)
    {
        highest();
    }
    else
    {
        printf("Invalid!");
    }
    return 0;
}
