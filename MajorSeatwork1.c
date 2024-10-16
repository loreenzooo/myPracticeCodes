#include <stdio.h>

int main()
{
double num1, num2, result;
char ope;

printf("Enter first number: \n");
scanf("%lf", &num1);

printf("Enter operator: (+, -, /, *, %): \n");
scanf(" %c", &ope);

printf("Enter second number: \n");
scanf("%lf", &num2);

if (ope == '+') 
{
    result = num1 + num2;
   
   
    printf("The sum is: %.2lf", result);
    
}
else if (ope == '-'){
    result =  num1 - num2;
    if (num1 && num2 < 0){
        printf("Bawal boss");
    }
    else{
    printf("%.2lf", result);   
}
}
else if (ope == '*'){
    result = num1 * num2;
    printf("%.2lf", result);
}
else if (ope == '%'){
    int num1, num2;
    result = num1 % num2;
    printf("%d", result);
}
else if('/'){
    result = num1 / num2;
    if(num2 == 0){
        printf("Bawal");
    }
    printf("%.2lf", result);
}
else {
    printf("Invalid!");
}

    return 0;
}