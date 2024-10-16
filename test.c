#include <stdio.h>
int main() 
{
    int integer1, integer2, sum, difference, product;
    double modulus, quotient;

    printf("Please Enter 2 Integers : ");
    scanf("%d", &integer1);
    printf("Please Enter 2 Integers : ");
    scanf("%d", &integer2);



    sum = integer1 + integer2;
    difference = integer1 - integer2;
    product = integer1 * integer2;
    modulus = integer1 % integer2;
    quotient = integer1 / integer2;

    printf("The Sum of %d and %d is %d\n", integer1, integer2, sum);
    printf("The Difference of %d and %d is %d\n", integer1, integer2, difference);
    printf("The Product of %d and %d is %d\n", integer1, integer2, product);
    printf("The Modulus of %d and %d is %.2lf\n", integer1, integer2, modulus);
    printf("The Quotient of %d and %d is %.2lf\n", integer1, integer2, quotient);

    return 0;
}