#include <stdio.h>

int main ()
 {

    double num1, num2, result;
    char ope;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator: ");
    scanf(" %c", &ope);

    switch (ope)
    {
        case '+': 
            result = num1 + num2;
            printf("The sum is: %.2lf", result);
            break;
        
        case '-': 
            result = num1 - num2;
            printf("The diff is: %.2lf", result);
            break;
        
        case '*': 
            result = num1 * num2;
            printf("The product is: %.2lf", result);
            break;
        
        case '/': 
            if (num2 == 0){
                printf("Invalid");
            }
            else{
                result = num1 / num2;
                printf("The division is: %.2lf", result);
                break;
            
            
            case '%': 
                int num1, num2;
                result = num1 % num2;
                printf("The division is: %d", result);
                break;
            
            default: {
                printf("Invalid input!");
            }
        }
        

    }
 }