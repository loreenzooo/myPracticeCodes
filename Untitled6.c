#include<stdio.h>

int main()
{
    int hourly_pay, no_ofhrsworked_perweek
    float totaltax = 0.14, clothesandaccessories = .10, schoolsupplies = .01, savingbonds = 0.25, parentscontri = 0.50, incomebeforetax = 0, incomeaftertax = 0, MoneySpentonClothesandAccessories = 0, Moneyspentonschoolsupplies = 0, moneyspentonsavingsbonds = 0, parentsspentonsavinsbonds = 0

    printf("Enter your hourly pay rate: %d\n");
    scanf("%d", hourly_pay);

    printf("Enter the number of hours worked each week: %d\n");
    scanf("%d", no_ofhrsworked_perweek);

    //calculate
    incomebeforetax = (no_ofhrsworked_perweek * 5) * hourly_pay;
    incomeaftertax = (float) incomebeforetax - totaltax;
    MoneySpentonClothesandAccessories = (float) incomebeforetax * clothesandaccessories;
    Moneyspentonschoolsupplies = (float) incomebeforetax * schoolsupplies;
    moneyspentonsavingsbonds = (float) incomebeforetax * savingbonds;
    parentscontri = (float) incomebeforetax * parentsspentonsavinsbonds;

    printf("Income before taxes: %d\n", incomebeforetax);
    printf("Income after taxes: %d\n", incomeaftertax);
    printf("Money spent on clothes and accessories: %d\n", MoneySpentonClothesandAccessories);
    printf("Money spent on school supplies: %d\n", Moneyspentonschoolsupplies);
    printf("Money spent on savings bond: %d\n", moneyspentonsavingsbonds);
    printf("Parents' contribution for savings bond: %d\n", parentscontri);

    return 0;


}
