#include <stdio.h>
int main()
{
    // choices
    char choice, ans;
    int total = 0;
    int dishChoice, drinksChoice, dessertsChoice;
    // rice price
    int rice = 10;
    
    // Dishes price
    int adobo = 45,  friedchicken = 30,  sinigang = 35,  friedfish = 30,  shrimp = 40;

    // Drinks price
    int coke = 15, sprite = 15, royal = 15, water = 0;

    // Desserts price
    int halohalo = 50, ubeHalaya = 45, lecheFlan = 50, ensaymada = 30;
do{
    printf("======= Welcome to isay eatery! ======");
    printf("\n1. Dishes\n2. Drinks\n3. Desserts\n4. Rice");
    printf("\nSelect food you want to order: ");
    scanf(" %c", &choice);

    switch (choice)

    // dishes
    case '1':
    {
        printf("DISHES SECTION\n");
        printf("1. Adobo ₱45\n2. Fried Chicken ₱30\n3. Sinigang ₱35\n4. Fried Fish ₱30\n5. Shrimp ₱40\n");
        printf("Type dish you want to order: ");
        scanf("%d", &dishChoice);
                   
                switch (dishChoice)
                {
                    case 1: total += adobo; break;
                    case 2: total += friedchicken; break;
                    case 3: total += sinigang; break;
                    case 4: total += friedfish; break;
                    case 5: total += shrimp; break; 
                    default: printf("Invalid choice!\n"); 

                
                }
        break;
        case '2': {
            printf("DRINKS SECTION");
            printf("1. Coke ₱15\n2.Sprite ₱15\n3.Royal ₱15 4.Water ₱0 ");
        }
    // desserts
    case '3':
    {
        printf("DESSERTS SECTION\n");
        printf("1. Halo-Halo ₱50\n2. Ube halaya ₱45\n3. Leche Flan ₱50\n4. Ensaymada ₱30");
        break;

    // rice
    case '4':
    {
        printf("RICE SECTION\n");
        printf("1.Rice ₱10");
        break;
    }
    default:
    {
        printf("Invalid choice!");
    }
    }
    }

    printf("Your total is: %d\n", total);         
                printf("Do you want to order again? y/n: ");
                scanf(" %c", &ans);
}while(ans == 'y' || ans == 'Y');
printf("Thank you!");
        return 0;
}
