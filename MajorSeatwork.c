#include <stdio.h>

int main()
{

    int number;
    char choice;
    
    do
    {
        printf("Input an integer: ");
        scanf("%d", &number);

        if (number > 0)
        {
            if (number % 2 == 0)
            {
                printf("Positive even.");
            }
            else
            {
                printf("Positive odd.");
            }
        }
        else
        {
            if (number % 2 == 0)
            {
                printf("Negative even.");
            }
            else
            {
                printf("Negative odd.");
            }
        }
        printf("\nDo you want to input another integer? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Thank you for using me! :( )");
    return 0;
}