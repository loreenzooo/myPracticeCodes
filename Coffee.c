#include <stdio.h>
void refillCoffee()
{
    printf("Your cup is refilled with coffee.");
}
void drinkWell()
{
    printf("Careful it's hot.");
}
int main()
{
    
     char answer;
    printf("Is your cup empty? (y/n): ");
    scanf("%c", &answer);

    if (answer == 'y')
    {
        refillCoffee();
    }
    else
    {
        drinkWell();
    }
    return 0;
}