#include <stdio.h>

int main()
{

    int choice;

    printf("1. Apple\n2. Banana\n3. Orange\n4. Grapes\n");
    printf("Choose a fruit (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You picked Apple!\n");
        printf("Apples are rich in fiber and antioxidants.");
        break;
    case 2:
        printf("You picked Banana!\n");
        printf("Bananas provide potassium and boost energy.");
        break;
    case 3:
        printf("You picked Orange!\n");
        printf("Oranges are a good source of Vitamin C.");
        break;
    case 4:
        printf("You picked Grape!\n");
        printf("Grapes have anti-inflammatory properties.");
        break;
    default:
        printf("Invalid input! please choose (1-4) only.");
        break;
    }

    return 0;
}