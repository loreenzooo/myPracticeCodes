#include <stdio.h>
// United States Currency
void usdCurrency()
{
    double unitedState = 0.018;
    double PHP, usd;
    int choice;

    printf("=============Welcome to PHP Currency to USD converter=============\n");

    printf("Enter your Philippine money: ");
    scanf("%lf", &PHP);

    usd = PHP * unitedState;
    printf("Your USD is: %.2lf\n", usd);
}
// Japan currency
void yenCurrency()
{
    double Japan = 2.56;
    double PHP, yen;
    printf("=============Welcome to PHP Currency to YEN converter=============\n");

    printf("Enter your Philippine money: ");
    scanf("%lf", &PHP);

    yen = PHP * Japan;
    printf("Your Yen is: %.2lf\n", yen);
}
// Europe Currency
void euroCurrency()
{
    double Euro = 0.01609;
    double PHP, euro;
    printf("=============Welcome to PHP Currency to EURO converter=============\n");

    printf("Enter your Philippine money: ");
    scanf("%lf", &PHP);

    euro = PHP * Euro;
    printf("Your Euro is: %.2lf\n", euro);
}
// Russia Currency
void russiaCurrency()
{
    double Russia = 0.61;
    double PHP, ruble;

    printf("=============Welcome to PHP Currency to RUBLE converter=============\n");

    printf("Enter your Philippine money: ");
    scanf("%lf", &PHP);

    ruble = PHP * Russia;
    printf("Your Ruble is: %.2lf\n", ruble);
}
// South Korea Currency
void southKorCurrency()
{
    double SouthKorea = 23.78;
    double PHP, won;

    printf("=============Welcome to PHP Currency to WON converter=============\n");

    printf("Enter your Philippine money: ");
    scanf("%lf", &PHP);

    won = PHP * SouthKorea;
    printf("Your Won is: %.2lf\n", won);
}

int main()
{

    int choice;
    char loopAns;
    do
    {
        printf("Select currency you want to convert:\n1.United States\n2.Japan\n3.Europe\n4.Russia\n5.South Korea\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            usdCurrency();
        }
        else if (choice == 2)
        {
            yenCurrency();
        }
        else if (choice == 3)
        {
            euroCurrency();
        }
        else if (choice == 4)
        {
            russiaCurrency();
        }
        else if (choice == 5)
        {
            southKorCurrency();
        }
        else
        {
            printf("Invalid! 1-5 numbers only!");
        }
        printf("You want to try another currency? (y/n)");
        scanf(" %c", &loopAns);
    } while (loopAns == 'y' || loopAns == 'Y');
    printf("Thankyou.");
    return 0;
}